#ifndef DEF_SNAKE
#define DEF_SNAKE
#include "ui.h"
#include "food.h"
#include "constants.h"
#include <ncurses.h>
#include <vector>
#include <utility> 
using namespace std;
bool has_collision();
void init_snake();
void paint_snake();
pair<int,int> move_snake(int direction);
void grow_snake();
void reset_snake_loc();
#endif