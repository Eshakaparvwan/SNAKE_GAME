#include <iostream>
#include <vector>
#include <curses.h>
#include <chrono>
#include "smath.h"
#include "ui.h"
#include "game.h"
#include "constants.h"
using namespace std;

void event_loop(){
    auto last_time=chrono::system_clock::now();
    auto current_time=last_time;
    int dt;
    while (true){
        do{
        current_time=chrono::system_clock::now();
        dt=chrono::duration_cast<std::chrono::microseconds>(current_time-last_time).count();
        }while(dt<TIME_DELAY);
        last_time=current_time;
        erase();
       
       bool exit= game_logic();
       if(exit){
           break;
       }
        refresh();
 
        /* code */
    }
    
    // while (true)
    // {
    //     erase();
    //      paint_border();
    //      game_logic();
    //      refresh();
    //      t1=current_time();

    //     /* code */

    // }
    
}
int main() {
 
    init_ui();
    event_loop();
    tear_down_ui();
    
    cout<<endl<<"thanks for playing slither"<<endl;
return 0;
}