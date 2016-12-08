#include "Triangle.h"

Triangle::Triangle(int a, int b) : a(a), b(b) {}
Triangle::Triangle() {}

int Triangle::getA() const {
    return a;
}

void Triangle::setA(int a) {
    Triangle::a = a;
}

int Triangle::getB() const {
    return b;
}

void Triangle::setB(int b) {
    Triangle::b = b;
}

bool Triangle::checkSimilarity(Triangle triangle) {
    if((this->a / this->b) == (triangle.a / triangle.b)) {
        return true;
    } else {
        return false;
    }
}