//
// Created by alex on 9/23/17.
//

#ifndef FRAMEPROJECT_INTERSECTION_H
#define FRAMEPROJECT_INTERSECTION_H


#include "Rectangle.h"
#include <iostream>
class InterSection {
public:
    InterSection(Rectangle, Rectangle);
    bool isInterSected();
    int getInterSectedArea();
    int getUnionArea();

private:
    Rectangle a,b;
};


#endif //FRAMEPROJECT_INTERSECTION_H
