#include "game.h"
using namespace std;

int direction;
int game_state=BEFORE_START;
int score;
int lives=5;
void end_game(){
    game_state=ENDED;
    

}
void start_game(){
    score=0;
    init_snake();
    init_food();
    direction=UP;
    game_state=AFTER_START;
    lives=5;
    
}
void paint_status(){
    move(0,5);
    printw("SCORE %d",score);
    move(0,COLS-10);
    for(int i=0;i<lives;i++)
    {
        addstr("0");
    }
    if(game_state==BEFORE_START)
    {
             move(10,10);
             addstr("Press any key to enter");
        
    }
    else if(game_state==AFTER_START)
    {}
    else
    {
                move(10,10);
        addstr("PRESS SPACE TO RESTART / q TO QUIT");
        
    }
    
}

bool game_logic(){
    paint_border();
    paint_status();
     char key=getch();
    if(game_state==BEFORE_START){
    move(10,10);
    addstr("Press any key to enter");
        if(key==32){
            start_game();
        }
    }
    
    else if(game_state==AFTER_START){

   
    if(key==UP and direction!=DOWN){
        direction=UP;
    }
    else if(key==LEFT and direction!=RIGHT){
        direction=LEFT;
    }
    else if(key==RIGHT and direction!=LEFT){
        direction=RIGHT;
    }
    else if(key==DOWN and direction!=UP){
        direction=DOWN;
    }
   pair<int,int> head=move_snake(direction);
    if(try_consume_food(head)){
        grow_snake();
        score++;
    }
    
    paint_snake();
    paint_food();
    
    if(has_collision()){
       lives=lives-1;
       
       if(lives==-1)
       {
        end_game();
       }
       else
       {
           reset_snake_loc();
       }
    }
     }
     else
    {
        paint_snake();
    paint_food();
    
         if(key==32){
            start_game();
        }
        if(key==QUIT)
        {
            return true;
        }
    }
   
    return false;
    }

