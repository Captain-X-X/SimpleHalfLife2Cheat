/*
	this is a simple class for assaultcube
	  AssaultCube Version 1.2.0.2
	created by: captain_x-X#2181
	https://github.com/Captain-X-X
*/
#include "pch.h"
#include "Vector.h"

Vector2::Vector2()
{
	x = y = 0.0f;
}
Vector2::Vector2(float init)
{
	this->x = init;
	this->y = init;
}
Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

void vec2::scaleFixedPoint(float scale, vec2 fixedPoint)
{
	x = x * scale + fixedPoint.x * (1 - scale);
	y = y * scale + fixedPoint.y * (1 - scale);
}

vec3 vec3::Vector3Add(Vector3 src, Vector3 dst)
{
	Vector3 add;
	add.x = src.x + dst.x;
	add.y = src.y + dst.y;
	add.z = src.z + dst.z;
	return add;
}

vec3 vec3::Vector3Sub(Vector3 src, Vector3 dst)
{
	Vector3 sub;
	sub.x = src.x - dst.x;
	sub.y = src.y - dst.y;
	sub.z = src.z - dst.z;
	return sub;
}

vec3 vec3::Vector3Multiply(Vector3 src, Vector3 dst)
{
	Vector3 multiply;
	multiply.x = src.x * dst.x;
	multiply.y = src.y * dst.y;
	multiply.z = src.z * dst.z;
	return multiply;
}

vec3 vec3::Vector3Divide(Vector3 src, Vector3 dst)
{
	Vector3 divide;
	divide.x = src.x / dst.x;
	divide.y = src.y / dst.y;
	divide.z = src.z / dst.z;
	return divide;
}

float Maths::DistanceVec2(vec2 dst, vec2 src)
{
	float distance;
	distance = sqrtf(powf(dst.x - src.x, 2) + powf(dst.y - src.y, 2));
	return distance;
}

float Maths::DistanceVec3(Vector3 dst, Vector3 src)
{
	float distance;
	distance = sqrtf(powf(dst.x - src.x, 2) + powf(dst.y - src.y, 2) + powf(dst.z - src.z, 2));
	return distance;
}

Vector3 Maths::CalcAngle(Vector3 src, Vector3 dst)
{
	Vector3 angle;
	angle.x = -atan2f(dst.x - src.x, dst.y - src.y) / (float)PI * 180 + 180;
	angle.y = asinf((dst.z - src.z) / DistanceVec3(src, dst)) * 180 / (float)PI;
	angle.z = 0;
	return angle;
}