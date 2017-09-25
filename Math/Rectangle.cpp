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


int Rectangle::Area() {
    return height * width;
}

int Rectangle::getTop() const {
    return top;
}

void Rectangle::setTop(int top) {
    Rectangle::top = top;
}

int Rectangle::getLeft() const {
    return left;
}

void Rectangle::setLeft(int left) {
    Rectangle::left = left;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    Rectangle::width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    Rectangle::height = height;
}

Rectangle::Rectangle() {

}
