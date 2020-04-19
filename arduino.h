#ifndef ARDUINO_H_INCLUDED
#define ARDUINO_H_INCLUDED
#include "playermov.h"
int arduinoWriteData(int x);
int arduinoReadData(int *x);
void manette(int *manet,perso *perso,int *prevx);
#endif 
