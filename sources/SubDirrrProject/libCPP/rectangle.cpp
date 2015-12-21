#include "rectangle.h"

Rectangle::Rectangle(int width, int height){
    this->height = height;
    this->width = width;
}
int Rectangle::getWidth(){
    return width;
}
void Rectangle::setWidth(int width){
    this->width = width;
}
int Rectangle::getHeight(){
    return height;
}
void Rectangle::setHeight(int height){
    this->height = height;
}
bool Rectangle::canInsert(Rectangle rect1, Rectangle rect2){
    return (
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
