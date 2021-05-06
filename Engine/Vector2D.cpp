#include "Vector2D.h"

#include <math.h>

Vector2D::Vector2D(float x, float y)
    :
    x(x),
    y(y)
{
}

Vector2D Vector2D::operator+(const Vector2D& v) const
{
    return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::operator-(const Vector2D& v) const
{
    return Vector2D(x - v.x, y - v.y);
}

Vector2D& Vector2D::operator+=(const Vector2D& v)
{
    return *this = *this + v;
}

Vector2D& Vector2D::operator-=(const Vector2D& v)
{
    return *this = *this - v;
}

Vector2D Vector2D::operator*(float scalefactor) const
{
    return Vector2D(x * scalefactor, y * scalefactor);
}

Vector2D Vector2D::operator/(float scalefactor) const
{
    return Vector2D(x / scalefactor, y / scalefactor);
}

Vector2D& Vector2D::operator*=(float scalefactor)
{
    return *this = *this * scalefactor;
}

Vector2D& Vector2D::operator/=(float scalefactor)
{
    return *this = *this / scalefactor;
}

float Vector2D::Magnitude() const
{
    return sqrt(MagnitudeSq());
}

float Vector2D::MagnitudeSq() const
{
    return x * x + y * y;
}

Vector2D Vector2D::UnitVector() const
{
    return *this / Magnitude();
}

Vector2D& Vector2D::ConvertToUnitVector()
{
    return *this = UnitVector();
}
