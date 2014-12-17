#ifndef GRID_H
#define GRID_H

#include <curses.h>
#include <stdint.h>

typedef struct grid
{
    int32_t x_grid;
    int32_t y_grid;
}grid_t;

grid_t g;
// Grid window
WINDOW *grid_win;

void print_grid(WINDOW *);

#endif /* GRID_H */