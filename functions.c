#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include "header.h"

void checkKeyboard(int flag, int inKeys[NUMKEYS], char outKeys[NUMKEYS][KEYLETTERS]) {
    int i;
    for (i = 0; i < NUMKEYS; i++) {
        int checkKey = GetAsyncKeyState(inKeys[i]) & (0x8000 != 0);
        if (checkKey) {
            if (flag != 0) {
            printf("'%s' ", outKeys[i]);
            }
        }
    }
    Sleep(20);
}
