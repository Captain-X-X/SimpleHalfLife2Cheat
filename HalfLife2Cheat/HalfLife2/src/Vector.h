#pragma once
/*
	this is a simple class for assaultcube
	  AssaultCube Version 1.2.0.2
	created by: captain_x-X#2181
	https://github.com/Captain-X-X
*/

#define PI         3.14159265358979323846
#include <math.h>
#include <corecrt_math.h>
#include <cfloat>
#include <vector>

struct Vector2
{
	Vector2();
	Vector2(float init);
	Vector2(float x, float y);
	float x{ 0 };
	float y{ 0 };
	void scaleFixedPoint(float scale, Vector2 fixedPoint);
};

class Vector3 
{
public:
	float x = 0.f;
	float y = 0.f;
	float z = 0.f;
	Vector3() {};
	Vector3(const float x, const float y, const float z) : x(x), y(y), z(z) {}
	Vector3 operator + (const Vector3& rhs) const { return Vector3(x + rhs.x, y + rhs.y, z + rhs.z); }
	Vector3 operator - (const Vector3& rhs) const { return Vector3(x - rhs.x, y - rhs.y, z - rhs.z); }
	Vector3 operator * (const float& rhs) const { return Vector3(x * rhs, y * rhs, z * rhs); }
	Vector3 operator / (const float& rhs) const { return Vector3(x / rhs, y / rhs, z / rhs); }
	Vector3& operator += (const Vector3& rhs) { return *this = *this + rhs; }
	Vector3& operator -= (const Vector3& rhs) { return *this = *this - rhs; }
	Vector3& operator *= (const float& rhs) { return *this = *this * rhs; }
	Vector3& operator /= (const float& rhs) { return *this = *this / rhs; }
	float Length() const { return sqrtf(x * x + y * y + z * z); }
	Vector3 Normalize() const { return *this * (1 / Length()); }
	float Distance(const Vector3& rhs) const { return (*this - rhs).Length(); }
	Vector3 Vector3Add(Vector3 src, Vector3 dst);
	Vector3 Vector3Sub(Vector3 src, Vector3 dst);
	Vector3 Vector3Multiply(Vector3 src, Vector3 dst);
	Vector3 Vector3Divide(Vector3 src, Vector3 dst);
};

struct Vector4 
{ 
	Vector4()
	{
		x = y = z = w = 0.0f;
	}
	Vector4(float _x, float _y = 0.0f, float _z = 0.0f, float _w = 0.0f)
	{
		x = _x;
		y = _y;
		z = _z;
		w = _w;
	}
	float x, y, z, w; 
};
using vec4 = Vector4;
using vec3 = Vector3;
using Vec = Vector3;
using vec = Vector3;
using vec2 = Vector2;

namespace Maths
{
	float DistanceVec2(Vector2 src, Vector2 dst);
	float DistanceVec3(Vector3 src, Vector3 dst);
	Vector3 CalcAngle(Vector3 src, Vector3 dst);
}