#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include <time.h>

#define NUMKEYS 54
#define SHIFTKEYS 48
#define KEYLETTERS 15

void checkKeyboard(int flag, int inKeys[NUMKEYS], char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]);
void nonShiftPrint(int checkShift, int flag, int counter, char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]);
void shiftPrint();
void printTime();