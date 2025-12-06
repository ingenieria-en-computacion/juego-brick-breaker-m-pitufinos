#ifndef __BRICK_H__
#define __BRICK_H__

#define BRICK_COLS 10
#define BRICK_ROWS 5

typedef struct
{
    int active;
} Bricks;

void bricks_init();
Bricks (*bricks_get())[BRICK_COLS];
void brick_destroy(int row, int col);
#endif