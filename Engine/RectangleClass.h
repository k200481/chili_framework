#pragma once
#include "Vector2D.h"

class RectangleClass
{
public:
	//constructors
	RectangleClass() = default;
	RectangleClass(float top, float right, float bottom, float left);
	RectangleClass(Vector2D topLeft, Vector2D bottomRight);
	RectangleClass(Vector2D topLeft, float width, float height);
	static RectangleClass CreateRectFromCenter(Vector2D center, float width, float height);

	//other utility functions
	bool IsOverlappingWith(const RectangleClass& other) const;
	bool IsContainedBy(const RectangleClass& container) const;

	//resize
	RectangleClass GetResized( int pixels ) const;
public:
	float top;
	float right;
	float bottom;
	float left;
};

