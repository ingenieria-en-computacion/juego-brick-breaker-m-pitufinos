#ifndef __BALL_H__
#define __BALL_H__

typedef struct 
{
    int x, y, ax, ay;
    float radius; 
}Ball;
//error fatal
void ball_update();
void ball_init();
Ball* ball_get();

#endif