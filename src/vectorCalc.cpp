#include <iostream>
#include "../headers/vectorCalc.h"
#include <math.h>

Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}

Vector Vector::operator+(const Vector &v) const
{

    return Vector(x + v.x, y + v.y, z + v.z);
}

Vector Vector::operator-(const Vector &v) const
{

    return Vector(x - v.x, y - v.y, z - v.z);
}

Vector Vector::operator*(float scalar) const
{
    return Vector(x * scalar, y * scalar, z * scalar);
}

bool Vector::operator==(const Vector &v) const
{
    return x == v.x && y == v.y && z == v.z;
}

double Vector::dot(const Vector &v) const
{

    return (x * v.x + y * v.y + z * v.z);
}

double Vector::magnitude() const
{
    return sqrt(x * x + y * y + z * z);
}

Vector Vector::operator-() const
{

    return Vector(-x, -y, -z);
}

std::ostream &operator<<(std::ostream &os, const Vector &v)
{

    os << "x: " << v.x << std::endl;
    os << "y: " << v.y << std::endl;
    os << "z: " << v.z << std::endl;
    return os;
}