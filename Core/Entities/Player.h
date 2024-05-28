#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "D:\Pictures\SeaBATTLE\Core\Lib\Lib.h"

void explosion(Ships* characteristic, int ship_pos[12][24], int plus, int& end);
void LoadCharactShips(Ships* characteristic);
void auto_arrangement(Ships* characteristic, int ship_pos[12][24], int plus);
void setShips(int x, int y, int key, int num, int ship_pos[12][24], Ships* characteristic,bool start);
#endif // PLAYER_H_INCLUDED
