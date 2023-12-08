#ifndef MAIN_H
#define MAIN_H
#define SCREEN_HEIGHT 160
#define SCREEN_WIDTH 240
#define BIRD_HEIGHT 23
#define BIRD_WIDTH 32
#define PIPE_WIDTH 26
#include "gba.h"

// TODO: Create any necessary structs
struct bird{
    int height;
    int x;
};
/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*     struct pipe pipe1;
  struct pipe pipe2;
  struct pipe pipe3;
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
