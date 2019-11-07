//
// Created by Eva Wu on 11/7/19.
//

#ifndef INHERTANCE_EXERCISE_RECTANGLE_H
#define INHERTANCE_EXERCISE_RECTANGLE_H

#include "Polygon.h"
#include "Triangle.h"

class Rectangle : public Polygon{

public:
    int area (int l, int w);

};

#endif //INHERTANCE_EXERCISE_RECTANGLE_H
