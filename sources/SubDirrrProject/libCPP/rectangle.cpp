#include "rectangle.h"
#include "exception.h"

Rectangle::Rectangle(const double width, const  double height){
    this->height = height;
    this->width = width;
}

int Rectangle::getWidth(){
    return width;
}

void Rectangle::setWidth(const double width){
    this->width = width;
}

int Rectangle::getHeight(){
    return height;
}

void Rectangle::setHeight(const double height){
    this->height = height;
}

bool Rectangle::canInsert(Rectangle rect1, Rectangle rect2){
    if (width < 0)
        throw UnderNullExceptionW(width);
    if (height < 0)
        throw UnderNullExceptionH(height);
    return(
        (
        (rect1.getWidth()+rect2.getWidth()<=width)&&
        (rect1.getHeight()<=height)&&
        (rect2.getHeight()<=height)
        )||
        (
        (rect1.getHeight()+rect2.getWidth()<=width)&&
        (rect1.getWidth()<=height)&&
        (rect2.getHeight()<=height)
        )||
        (
        (rect1.getHeight()+rect2.getHeight()<=width)&&
        (rect1.getWidth()<=height)&&
        (rect2.getWidth()<=height)
        )||
        (
        (rect1.getWidth()+rect2.getHeight()<=width)&&
        (rect1.getHeight()<=height)&&
        (rect2.getWidth()<=height)
        )||
        (
        (rect1.getWidth()+rect2.getWidth()<=height)&&
        (rect1.getHeight()<=width)&&
        (rect2.getHeight()<=width)
        )||
        (
        (rect1.getHeight()+rect2.getWidth() <=height)&&
        (rect1.getWidth() <=width)&&
        (rect2.getHeight()<=width)
        )||
        (
        (rect1.getHeight()+rect2.getHeight()<=height)&&
        (rect1.getWidth()<=width)&&
        (rect2.getWidth()<=width)
        )||
        (
        (rect1.getWidth()+rect2.getHeight() <=height)&&
        (rect1.getHeight()<=width)&&
        (rect2.getWidth() <=width)
        )
        );
}
