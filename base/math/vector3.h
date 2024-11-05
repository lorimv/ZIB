#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>
#include "base/math/constants.h"

struct Vector3 {
    float x, y, z;

    // constructor (simply sets x, y, and z, defaults to (0, 0, 0))
    Vector3(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // This struct has both a set of instance methods for in-place operations,
    // and a set of static methods for functional programming styles
    // INSTANCE METHODS ARE ONLY USED TO MODIFY THE ORIGINAL VECTOR

    // in-place functions
    // four basic operations
    void add(const Vector3& v) {
        x += v.x;
        y += v.y;
        z += v.z;
    }
    void subtract(const Vector3& v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
    }
    void multiply(const Vector3& v) {
        x *= v.x;
        y *= v.y;
        z *= v.z;
    }
    void divide(const Vector3& v) {
        x /= v.x;
        y /= v.y;
        z /= v.z;
    }
    // scalar functions
    void multiplyScalar(float n) {
        x *= n;
        y *= n;
        z *= n;
    }
    void divideScalar(float n) {
        x /= n;
        y /= n;
        z /= n;
    }

    // static new object functions
    // four basic operations
    static Vector3 sum(const Vector3& v1, const Vector3& v2) {
        return Vector3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
    }
    static Vector3 difference(const Vector3& v1, const Vector3& v2) {
        return Vector3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
    }
    static Vector3 product(const Vector3& v1, const Vector3& v2) {
        return Vector3(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
    }
    static Vector3 quotient(const Vector3& v1, const Vector3& v2) {
        return Vector3(v1.x / v2.x, v1.y / v2.y, v1.z / v2.z);
    }
    //scalar functions (static)
    static Vector3 scalarProduct(const Vector3& v, float n) {
        return Vector3(v.x * n, v.y * n, v.z * n);
    }
    static Vector3 scalarQuotient(const Vector3& v, float n) {
        return Vector3(v.x / n, v.y / n, v.z / n);
    }

    // other functions
    static float dot(const Vector3& v1, const Vector3& v2);
    static Vector3 cross(const Vector3& v1, const Vector3& v2); // Note: returns Vector3 instead of float
    static float length(const Vector3& v);

    static bool isEqual(const Vector3& v1, const Vector3& v2);
    static bool notEqual(const Vector3& v1, const Vector3& v2);

    void normalize();
    static Vector3 normalized(const Vector3& v);
    
};

#endif // VECTOR3_H
