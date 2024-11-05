#include "vector3.h"

float Vector3::dot(const Vector3& v1, const Vector3& v2) {
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

Vector3 Vector3::cross(const Vector3& v1, const Vector3& v2) {
    return Vector3(
        v1.y*v2.z - v1.z*v2.y,
        v1.z*v2.x - v1.x*v2.z,
        v1.x*v2.y - v1.y*v2.x
    );
}

float Vector3::length(const Vector3& v) {
    return std::sqrt(dot(v, v));
}

bool Vector3::isEqual(const Vector3& v1, const Vector3& v2) {
    return (std::fabs(v1.x - v2.x) < EPSILON &&
            std::fabs(v1.y - v2.y) < EPSILON &&
            std::fabs(v1.z - v2.z) < EPSILON);
}

bool Vector3::notEqual(const Vector3& v1, const Vector3& v2) {
    return (std::fabs(v1.x - v2.x) > EPSILON ||
            std::fabs(v1.y - v2.y) > EPSILON ||
            std::fabs(v1.z - v2.z) > EPSILON);
}

void Vector3::normalize() {
    // s = the size of the vector, squared
    float s = x*x + y*y + z*z;

    if (std::fabs(s) > EPSILON) { // if it's not zero...
        // s now becomes the scale factor (inverted)
        s = std::sqrt(s);
        x /= s;
        y /= s;
        z /= s;
    }
}

Vector3 Vector3::normalized(const Vector3& v) {
    Vector3 vNormal = v;
    vNormal.normalize();
    return vNormal;
}
