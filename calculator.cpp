#include<iostream>
#include<cmath>

const double PI = 3.14159;

// Абстрактний базовий клас
class Shape {
public:
    virtual double calculatePerimeter() const = 0; // Чиста віртуальна функція
};

// Похідний клас "Triangle"
class Triangle : public Shape {
private:
    double side;

public:
    Triangle(double side) : side(side) {}

    double calculatePerimeter() const {
        return 3 * side;
    }
};

// Похідний клас "Rectangle"
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double calculatePerimeter() const {
        return 2 * (width + height);
    }
};

// Похідний клас "Circle"
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double calculatePerimeter() const {
        return 2 * PI * radius;
    }
};

int main() {
    Triangle tri(3.0);
    Rectangle rect(4.0, 5.0);
    Circle circ(6.0);

    std::cout << "Perimeter of Triangle: " << tri.calculatePerimeter() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rect.calculatePerimeter() << std::endl;
    std::cout << "Perimeter of Circle: " << circ.calculatePerimeter() << std::endl;

    return 0;
}