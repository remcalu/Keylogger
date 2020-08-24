#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include "header.h"

int main() {
    int flag = 0;
    int inKeys[NUMKEYS] = {0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x20, 0x0D};
    /* a b c d e f g h i j k l m n o p q r s t u v w x y z space enter */
    char outKeys[NUMKEYS][KEYLETTERS] = {"a\0", "b\0", "c\0", "d\0", "e\0", "f\0", "g\0", "h\0", "i\0", "j\0", "k\0", "l\0", "m\0", "n\0", "o\0", "p\0", "q\0", "r\0", "s\0", "t\0", "u\0", "v\0", "w\0", "x\0", "y\0", "z\0", "space\0", "enter\0"};
    while (1) {
        checkKeyboard(flag, inKeys, outKeys);
        flag = 1;
    }
}