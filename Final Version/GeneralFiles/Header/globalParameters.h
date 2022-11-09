#ifndef _GLOBALPARAMETERS_H
#define _GLOBALPARAMETERS_H

#include <GL/freeglut.h>
#include <vector>

extern int keys[6]; // vetor com sinais 0 ou 1 representando se uma tecla está ligada ou deslidaga

extern int auxKeys[3]; // vetor auxiliar ao "keys" para teclas do menu

extern int tempo, cont; // contadores de tempo

extern int top, bottom, left, right; // representam as coordenadas x e y máximas e minimas

extern int frames; // determina o tempo usado na glutTimerFunc

extern int bossTime; // flag que determina se 

#endif