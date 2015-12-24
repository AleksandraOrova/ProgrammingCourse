#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle{
private:
    double width;
    double height;
public:
    Rectangle(const double width, const  double height);
    int getWidth();
    void setWidth(const double width);
    int getHeight();
    void setHeight(const double height);
    bool canInsert(Rectangle, Rectangle);
};

#endif // RECTANGLE_H
