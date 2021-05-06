#include "RectangleClass.h"

RectangleClass::RectangleClass(float top, float right, float bottom, float left)
	:
	top(top), right(right), bottom(bottom), left(left)
{
}

RectangleClass::RectangleClass(Vector2D topLeft, Vector2D bottomRight)
	:
	top(topLeft.y), right(bottomRight.x), bottom(bottomRight.y), left(topLeft.x)
{
}

RectangleClass::RectangleClass(Vector2D topLeft, float width, float height)
	:
	top(topLeft.y), right(topLeft.x + width), bottom(top + height), left(topLeft.x)
{
}

RectangleClass RectangleClass::CreateRectFromCenter(Vector2D center, float width, float height)
{
	Vector2D topleft = center - Vector2D(width / 2, height / 2);
	Vector2D bottomRight = center + Vector2D(width / 2, height / 2);

	return RectangleClass(topleft, bottomRight);
}

bool RectangleClass::IsOverlappingWith(const RectangleClass& other) const
{
	return top < other.bottom && right > other.left
		&& bottom > other.top && left < other.right;
}

bool RectangleClass::IsContainedBy(const RectangleClass& container) const
{
	return top >= container.top && right <= container.right
		&& bottom <= container.bottom && left >= container.left;
}

RectangleClass RectangleClass::GetResized(int pixels) const
{
	return RectangleClass(top - pixels, right + pixels, bottom + pixels, left - pixels);
}
