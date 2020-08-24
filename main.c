#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <Winuser.h>

int main() {
    int i;
    int inLetters[26] = {0x41, 0x42, 0x43};
    char outLetters[26][3] = {"a\0", "b\0", "c\0"};
    while (1) {
        for (i = 0; i < 3; i++) {
            int check = GetAsyncKeyState(inLetters[i]);
            if (check & (0x8000 != 0)) {
                printf("'%s' ", outLetters[i]);
            }
        }
        Sleep(20);
    }
}