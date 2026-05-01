#pragma once
#include <iostream>

class Vector
{
    float x, y, z;

public:
    Vector(float x = 0, float y = 0, float z = 0);

    Vector operator+(const Vector &v) const;
    Vector operator-(const Vector &v) const;
    Vector operator*(float scalar) const;
    double dot(const Vector &v) const;
    double magnitude() const;
    Vector operator-() const;
    bool operator==(const Vector &v) const;

    friend std::ostream &operator<<(std::ostream &os, const Vector &v);
};