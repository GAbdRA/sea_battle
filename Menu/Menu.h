#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "D:\Pictures\SeaBATTLE\Core\Entities\Player.h"

enum Color { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue = 9, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
// ÷вета которыми можно окрашивать: цвет текста; цвет заливки текста


void setColor(Color text, Color background);
void SetCursor(int x, int y);
void PaintPos(int ship_pos[12][24], int x, int num_color);
void Avake();
void CreatField(int speed, int X, int num_color);
void Paint(char variant[2][30], int T);
void Meny(int num);
#endif // MENU_H_INCLUDED
