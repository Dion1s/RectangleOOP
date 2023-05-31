#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include <iostream>
#include <cmath>

class CRectangle {
private:
    double length;  
    double width;   

public:
    CRectangle();
    CRectangle(double length, double width);

    ~CRectangle() {};
    void setLength(double length);
    void setWidth(double width);
    double getLength() const;
    double getWidth() const;

    double calculateArea() const;
    double calculatePerimeter() const;
    double calculateDiagonal() const;
    double calculateAspectRation() const;

    void rotateRectangle();
    void increaseSize();
    bool isSquare() const;

    void console_input();
    void console_output() const;
};

#endif  
