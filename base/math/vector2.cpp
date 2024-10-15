#include "vector2.h"
//debug:
#include <iostream>

float Vector2::dot(const Vector2& v1, const Vector2& v2) {
    return v1.x*v2.x + v1.y*v2.y;
}

float Vector2::cross(const Vector2& v1, const Vector2& v2) {
    return v1.x*v2.y - v1.y*v2.x;
}

float Vector2::length(const Vector2& v) {
    return std::sqrt(v.x*v.x + v.y*v.y);
}

void Vector2::normalize() {
    // s = the size of the vector, squared
    float s = x*x + y*y;

    if (std::fabs(s) > EPSILON) { // if it's not zero...
        // s now becomes the scale factor (inverted). gotta save that space
        s = std::sqrt(s);
        x /= s;
        y /= s;
    }
}

// and here is the non-side effect one. the idea is that instance functions always modify, and 
// static ones never do. That way it's much harder to accidentally cause a side effect
Vector2 Vector2::normalized(const Vector2& v) {
    Vector2 vNormal = v;
    vNormal.normalize();
    return vNormal;
}

int main() {
    Vector2 test = Vector2(1, 1);
    Vector2 hi;
    std::cout << test.x << std::endl;
    std::cout << hi.x << std::endl;
    Vector2::length(test);
    test.x = 2;
    std::cout << Vector2::normalized(test).x;
    return 0;
}


// am still considering whether it is more or less confusing to use so many static functions for key math
// in my arrogant opinion I think an instance function implies you're performing an operation on the thing
