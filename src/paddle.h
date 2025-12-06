#ifndef __PADDLE_H__
#define __PADDLE_H__
typedef struct
{
    int x, y, width;
}Paddle;

void paddle_init();
void paddle_update(int direction);
Paddle* paddle_get();
#endif