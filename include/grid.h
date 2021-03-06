#ifndef GRID_H
#define GRID_H

#include <curses.h>
#include <stdint.h>

typedef struct grid
{
    int32_t x_grid;
    int32_t y_grid;
    uint8_t print_above;
    uint8_t print_below;
    uint8_t print_left;
    uint8_t print_right;
}grid_t;

grid_t g;
// Grid window
WINDOW *grid_win;

void print_grid(WINDOW *);
void generate_grid(WINDOW *, int32_t, int32_t, void (*print_scr)(WINDOW *, uint32_t, uint32_t, int16_t, int16_t, const char *));
void print_num_in_all_grid(WINDOW *, int32_t, int32_t, int32_t, void (*print_scr)(WINDOW *, uint32_t, uint32_t, int16_t, int16_t, const char *));
void print_num_in_grid(WINDOW *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, void (*print_scr)(WINDOW *, uint32_t, uint32_t, int16_t, int16_t, const char *));
void print_x_in_grid(WINDOW *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, void (*print_scr)(WINDOW *, uint32_t, uint32_t, int16_t, int16_t, const char *));
void print_o_in_grid(WINDOW *, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, void (*print_scr)(WINDOW *, uint32_t, uint32_t, int16_t, int16_t, const char *));


#endif /* GRID_H */
