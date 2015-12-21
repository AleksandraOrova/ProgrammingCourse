#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
private:
    int width;
    int height;
public:
    Rectangle(int, int);
    int getWidth();
    void setWidth(int);
    int getHeight();
    void setHeight(int);
    bool canInsert(Rectangle, Rectangle);
};

#endif // RECTANGLE_H
