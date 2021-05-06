#pragma once
class Vector2D
{
public:
	//constructors
	Vector2D() = default;
	Vector2D(float x, float y);

	//vector - vector operators
	Vector2D operator+(const Vector2D& v) const;
	Vector2D operator-(const Vector2D& v) const;

	Vector2D& operator+=(const Vector2D& v);
	Vector2D& operator-=(const Vector2D& v);
	
	//vector - float operators
	Vector2D operator*(float scalefactor) const;
	Vector2D operator/(float scalefactor) const;

	Vector2D& operator*=(float scalefactor);
	Vector2D& operator/=(float scalefactor);

	//magnitude
	float Magnitude() const;
	float MagnitudeSq() const;

	//unit vector
	Vector2D UnitVector() const;
	Vector2D& ConvertToUnitVector();
public:
	float x = 0.0f;
	float y = 0.0f;
};

