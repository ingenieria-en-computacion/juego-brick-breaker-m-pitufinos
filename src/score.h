#ifndef __SCORE_H__
#define __SCORE_H__

void score_init(const char *filename);
void score_add(int points);
int score_get();
void score_save(const char *filename);
#endif