#include "vector2.h"

float Vector2::dot(const Vector2& v1, const Vector2& v2) {
    return v1.x*v2.x + v1.y*v2.y;
}

float Vector2::cross(const Vector2& v1, const Vector2& v2) {
    return v1.x*v2.y - v1.y*v2.x;
}

float Vector2::length(const Vector2& v) {
    return std::sqrt(v.x*v.x + v.y*v.y);
}

bool Vector2::isEqual(const Vector2& v1, const Vector2& v2) {
    return (std::fabs(v1.x - v2.x) < EPSILON &&
            std::fabs(v1.y - v2.y) < EPSILON);
}
bool Vector2::notEqual(const Vector2& v1, const Vector2& v2) {
    return (std::fabs(v1.x - v2.x) > EPSILON ||
            std::fabs(v1.y - v2.y) > EPSILON);
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

// am still considering whether it is more or less confusing to use so many static functions for key math
// in my arrogant opinion I think an instance function implies you're performing an operation on the thing
