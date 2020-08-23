#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <Winuser.h>

int main() {
    while (1) {
        if (GetAsyncKeyState(VK_LSHIFT) & (0x8000 != 0)) {
            //printf("%d and %d and %d\n", (GetAsyncKeyState(VK_LSHIFT)), (0x8000 != 0), (GetAsyncKeyState(VK_LSHIFT) & (0x8000 != 0)));
            printf("L SHIFT\n");
        } else if (GetAsyncKeyState(VK_RSHIFT) & (0x8000 != 0)) { 
            //printf("%d and %d and %d\n", (GetAsyncKeyState(VK_RSHIFT)), (0x8000 != 0), (GetAsyncKeyState(VK_RSHIFT) & (0x8000 != 0)));
            printf("R SHIFT\n");
        }
    }
}