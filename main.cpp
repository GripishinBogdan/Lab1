#include <iostream>
#include "Triangle.h"

int main() {
    Triangle triangle(3, 4);
    Triangle triangle1(5, 6);

    if(triangle.checkSimilarity(triangle1)) {
        std::cout << "The Triangles Are Similar";
    } else {
        std::cout << "The Triangles Are Not Similar";
    }
}