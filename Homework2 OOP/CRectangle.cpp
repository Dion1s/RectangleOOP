#include "CRectangle.h"


CRectangle::CRectangle() {
    length = 0.0;
    width = 0.0;
}

CRectangle::CRectangle(double length, double width) {
    this->length = length;
    this->width = width;
}

void CRectangle::setLength(double length) {
    this->length = length;
}

void CRectangle::setWidth(double width) {
    this->width = width;
}

double CRectangle::getLength() const {
    return length;
}

double CRectangle::getWidth() const {
    return width;
}

double CRectangle::calculateArea() const {
    return length * width;
}

double CRectangle::calculatePerimeter() const {
    return 2 * (length + width);
}

double CRectangle::calculateDiagonal() const {
    return std::sqrt(length * length + width * width);
}

double CRectangle::calculateAspectRation() const {
    return length / width;
}

void CRectangle::rotateRectangle() {
    try {
        if (getLength() <= 0 || getWidth() <= 0) {
            throw std::invalid_argument("Invalid side lengths.");
        }
        double temp = length;
        length = width;
        width = temp;
        std::cout << "Rectangle: length = " << length << ", width = " << width << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

void CRectangle::increaseSize() {
    double increaseValue;
    std::cout << "Enter the value to increase the sides: ";
    std::cin >> increaseValue;

    try {
        setLength(getLength() + increaseValue);
        setWidth(getWidth() + increaseValue);
        std::cout << "Triangle sides increased by " << increaseValue << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

bool CRectangle::isSquare() const {
    return length == width;
}

void CRectangle::console_input() {
    double l, w;
    do {
        std::cout << "Enter the length: ";
        std::cin >> l;
        if (l <= 0)
            std::cout << "Invalid input! length must be a positive number." << std::endl;
    } while (l <= 0);
    setLength(l);

    do {
        std::cout << "Enter the width: ";
        std::cin >> w;
        if (w <= 0)
            std::cout << "Invalid input! width must be a positive number." << std::endl;
    } while (w <= 0);
    setWidth(w);
}

void CRectangle::console_output() const {
    std::cout << "Rectangle: length = " << length << ", width = " << width << std::endl;
    try {
        if (getLength() <= 0 || getWidth() <= 0) {
            throw std::invalid_argument("Invalid side lengths.");
        }
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
        std::cout << "Diagonal: " << calculateDiagonal() << std::endl;
        std::cout << "Aspect Ratio: " << calculateAspectRation() << std::endl;
        std::cout << "Is Square: " << (isSquare() ? "Yes" : "No") << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}




   
