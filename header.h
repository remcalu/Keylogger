#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>

#define NUMKEYS 28
#define KEYLETTERS 15

void checkKeyboard(int flag, int inKeys[NUMKEYS], char outKeys[NUMKEYS][KEYLETTERS]);
