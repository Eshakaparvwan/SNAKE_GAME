#ifndef DEF_FOOD
#define DEF_FOOD
#include <vector>
#include <utility>
#include <ncurses.h>
#include <experimental/random>
#include "constants.h"
using namespace std;
void paint_food();
void init_food();
bool try_consume_food(pair<int,int>);
#endif