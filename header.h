#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
#include <time.h>

#define NUMKEYS 54
#define SHIFTKEYS 48
#define KEYLETTERS 15

void checkKeyboard(FILE* fp, int flag, int inKeys[NUMKEYS], char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]);
void nonShiftPrint(FILE* fp, int checkShift, int flag, int counter, char outKeys[NUMKEYS][KEYLETTERS], char shiftedKeys[SHIFTKEYS][KEYLETTERS]);
void shiftPrint(FILE* fp);
void printTime(FILE* fp);
FILE* openFile();
void exitCondition(int ctrlCount, int altCount);