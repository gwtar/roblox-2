#ifndef SHAPE_H
#define SHAPE_H

#include <raylib.h>

typedef struct rectangle
{
    int position_x;
    int position_y;
    int size_x;
    int size_y;
    int speed_x;
    int speed_y;
    Color color;
} rectangle;

#endif /* SHAPE_H */
