#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>
#include "base/math/constants.h"

struct Vector2 {
    float x, y;

    // constructor (simply sets x and y, defaults to (0, 0))
    Vector2(float x = 0, float y = 0) : x(x), y(y) {}

    // This struct has both a set of instance methods for in-place operations,
    // and a set of static methods for functional programming styles
    // INSTANCE METHODS ARE ONLY USED TO MODIFY THE ORIGINAL VECTOR

    // INLINE FUNCTIONS (basic operations)

    // in-place functions
    // four basic operations
    void add(const Vector2& v) {
        x += v.x;
        y += v.y;
    }
    void subtract(const Vector2& v) {
        x -= v.x;
        y -= v.y;
    }
    void multiply(const Vector2& v) {
        x *= v.x;
        y *= v.y;
    }
    void divide(const Vector2& v) {
        x /= v.x;
        y /= v.y;
    }
    // scalar functions
    void multiplyScalar(float n) {
        x *= n;
        y *= n;
    }
    void divideScalar(float n) {
        x /= n;
        y /= n;
    }

    // static new object functions
    // four basic operations
    static Vector2 sum(const Vector2& v1, const Vector2& v2) {
        return Vector2(v1.x + v2.x, v1.y + v2.y);
    }
    static Vector2 difference(const Vector2& v1, const Vector2& v2) {
        return Vector2(v1.x - v2.x, v1.y - v2.y);
    }
    static Vector2 product(const Vector2& v1, const Vector2& v2) {
        return Vector2(v1.x * v2.x, v1.y * v2.y);
    }
    static Vector2 quotient(const Vector2& v1, const Vector2& v2) {
        return Vector2(v1.x / v2.x, v1.y / v2.y);
    }
    //scalar functions (static)
    static Vector2 scalarProduct(const Vector2& v, float n) {
        return Vector2(v.x * n, v.y * n);
    }
    static Vector2 scalarQuotient(const Vector2& v, float n) {
        return Vector2(v.x / n, v.y / n);
    }

    // other functions
    static float dot(const Vector2& v1, const Vector2& v2);
    static float cross(const Vector2& v1, const Vector2& v2);
    static float length(const Vector2& v);

    static bool isEqual(const Vector2& v1, const Vector2& v2);
    static bool notEqual(const Vector2& v1, const Vector2& v2);

    void normalize();
    static Vector2 normalized(const Vector2& v);

    void invert();
    static Vector2 inverse(const Vector2& v);
    
    // TODO: distance between points
    // rotate and transform?
    //
    // reason i'm not immediately adding these is I want to re-learn linear algebra as i add fns
};

#endif // VECTOR2_H
