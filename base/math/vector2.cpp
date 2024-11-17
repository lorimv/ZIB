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

// Normal functions
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
Vector2 Vector2::normalized(const Vector2& v) {
    Vector2 vNormal = v;
    vNormal.normalize();
    return vNormal;
}

// Inverse functions
void Vector2::invert() {
    x = -x;
    y = -y;
}
Vector2 Vector2::inverse(const Vector2& v) {
    Vector2 vInverse = v;
    vInverse.invert();
    return vInverse;
}
