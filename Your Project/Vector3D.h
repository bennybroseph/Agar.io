#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

#include <iostream>

#define PI 3.1415926535897932384626433832795

template <typename T>
class Vector3D
{
private:
	T x, y, z;

public:
	const T Magnitude() const;
	const Vector3D<T> Normalize() const;

	template <typename T, typename U>
	friend const T Dot(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2);
	template <typename T, typename U>
	friend const Vector3D<T> Cross(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2);
	template <typename T, typename U>
	friend const T Angle(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2);
	
	template <typename U>
	friend const Vector3D<T> Lerp(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2, const float ac_T);

	const T GetX() const;
	const T GetY() const;
	const T GetZ() const;

	void Print() const;

	Vector3D(const T ac_X, const T ac_Y, const T ac_Z);
	Vector3D();
	~Vector3D();


};
template <typename T>
const T Vector3D<T>::Magnitude() const
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
template <typename T>
const Vector3D<T> Vector3D<T>::Normalize() const
{
	Vector3D<T> NewVector(x / Magnitude(), y / Magnitude(), z / Magnitude());

	return NewVector;
}

template <typename T, typename U>
const T Dot(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2)
{
	T DotProduct =
		ac_Vector1.x*ac_Vector2.x +
		ac_Vector1.y*ac_Vector2.y +
		ac_Vector1.z*ac_Vector2.z;

	return DotProduct;
}
template <typename T, typename U>
const Vector3D<T> Cross(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2)
{
	Vector3D<T> NewVector(
		ac_Vector1.y * ac_Vector2.z - ac_Vector1.z * ac_Vector2.y,
		ac_Vector1.z * ac_Vector2.x - ac_Vector1.x * ac_Vector2.z,
		ac_Vector1.x * ac_Vector2.y - ac_Vector1.y * ac_Vector2.x);

	return NewVector;
}
template <typename T, typename U>
const T Angle(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2)
{
	T AngleBetween = acos(Dot(ac_Vector1.Normalize(), ac_Vector2.Normalize())) * (180 / PI);

	return AngleBetween;
}

template<typename T, typename U>
const Vector3D<T> Lerp(const Vector3D<T>& ac_Vector1, const Vector3D<U>& ac_Vector2, const float ac_T)
{
	return ac_Vector2 * ac_T + (1 - ac_T) * ac_Vector1;
}

template <typename T>
const T Vector3D<T>::GetX() const
{
	return x;
}
template <typename T>
const T Vector3D<T>::GetY() const
{
	return y;
}
template <typename T>
const T Vector3D<T>::GetZ() const
{
	return z;
}

template <typename T>
void Vector3D<T>::Print() const
{
	std::cout << x << ", " << y << ", " << z << " " << std::endl;
}

template <typename T>
Vector3D<T>::Vector3D(const T ac_X, const T ac_Y, const T ac_Z)
{
	x = ac_X;
	y = ac_Y;
	z = ac_Z;
}
template <typename T>
Vector3D<T>::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}

template <typename T>
Vector3D<T>::~Vector3D()
{

}

template <typename T>
const Vector3D<T> operator-(const Vector3D<T>& ac_Vector1)
{
	Vector3D<T> NewVector(-ac_Vector1.GetX(), -ac_Vector1.GetY(), -ac_Vector1.GetZ());

	return NewVector;
}
template <typename T>
const Vector3D<T> operator+(const Vector3D<T>& ac_Vector1, const Vector3D<T>& ac_Vector2)
{
	Vector3D<T> NewVector(
		ac_Vector1.GetX() + ac_Vector2.GetX(),
		ac_Vector1.GetY() + ac_Vector2.GetY(),
		ac_Vector1.GetZ() + ac_Vector2.GetZ());

	return NewVector;
}
template <typename T>
const Vector3D<T> operator-(const Vector3D<T>& ac_Vector1, const Vector3D<T>& ac_Vector2)
{
	return -ac_Vector1 + ac_Vector2;
}

template <typename T>
const Vector3D<T> operator*(const Vector3D<T>& ac_Vector1, const Vector3D<T>& ac_Vector2)
{
	Vector3D<T> NewVector(
		ac_Vector1.GetX() * ac_Vector2.GetX(),
		ac_Vector1.GetY() * ac_Vector2.GetY(),
		ac_Vector1.GetZ() * ac_Vector2.GetZ());

	return NewVector;
}
template <typename T>
const Vector3D<T> operator*(const Vector3D<T>& ac_Vector1, const float ac_Num)
{
	Vector3D<T> NewVector(
		ac_Vector1.GetX() * ac_Num,
		ac_Vector1.GetY() * ac_Num,
		ac_Vector1.GetZ() * ac_Num);

	return NewVector;
}
template <typename T>
const Vector3D<T> operator*(const float ac_Num, const Vector3D<T>& ac_Vector1)
{
	return ac_Vector1 * ac_Num;
}
#endif // VECTOR3D_H_
