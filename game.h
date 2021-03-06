#ifndef DEF_GAME
    #define DEF_GAME
        #include <curses.h>
        #include <iostream>
        #include "ui.h"
        #include "snake.h"
        
        #include "constants.h"
        #include "food.h"
        bool game_logic();
        void end_game();
        void start_game();
#endif