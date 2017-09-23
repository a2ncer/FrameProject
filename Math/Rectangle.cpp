//
// Created by alex on 9/23/17.
//

#include "Rectangle.h"


Rectangle::Rectangle(long top, long left, long width, long height) :
        top(top), left(left), width(width),height(height) {}


int Rectangle::X1() {
    return left;
}

int Rectangle::X2() {
    return left + width;
}

int Rectangle::Y1() {
    return top;
}

int Rectangle::Y2() {
    return top + height;
}

int Rectangle::Width() {
    return width;
}

int Rectangle::Height() {
    return height;
}

int Rectangle::Area() {
    return height * width;
}
