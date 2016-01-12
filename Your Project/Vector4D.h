#ifndef _VECTOR4D_H_
#define _VECTOR4D_H_

#include <iostream>

template<typename T>
class Vector4D
{
private:
	T x, y, z, t;

public:
	const T Magnitude() const;
	const Vector4D<T> Normalize() const;
	
	void Print() const;

	const T GetX() const;
	const T GetY() const;
	const T GetZ() const;
	const T GetT() const;

	Vector4D(const T ac_X, const T ac_Y, const T ac_Z, const T ac_T);
	Vector4D(const unsigned int ac_uiHex);
	Vector4D();
	~Vector4D();
};

template <typename T>
const T Vector4D<T>::Magnitude() const
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(t, 2));
}
template <typename T>
const Vector4D<T> Vector4D<T>::Normalize() const
{
	Vector4D<T> NewVector(x / Magnitude(), y / Magnitude(), z / Magnitude(), t / Magnitude());

	return NewVector;
}

template <typename T>
void Vector4D<T>::Print() const
{
	std::cout << x << ", " << y << ", " << z << ", " << t << " " << std::endl;
}

template<typename T>
const T Vector4D<T>::GetX() const
{
	return x;
}
template<typename T>
const T Vector4D<T>::GetY() const
{
	return y;
}
template<typename T>
const T Vector4D<T>::GetZ() const
{
	return z;
}
template<typename T>
const T Vector4D<T>::GetT() const
{
	return t;
}

template <typename T>
Vector4D<T>::Vector4D(const T ac_X, const T ac_Y, const T ac_Z, const T ac_T)
{
	x = ac_X;
	y = ac_Y;
	z = ac_Z;
	t = ac_T;
}
template <typename T>
Vector4D<T>::Vector4D(const unsigned int ac_uiHex)
{
	x = (ac_uiHex & 0xFF000000) >> 24;
	y = (ac_uiHex & 0x00FF0000) >> 16;
	z = (ac_uiHex & 0x0000FF00) >> 8;
	t = (ac_uiHex & 0x000000FF);
}
template <typename T>
Vector4D<T>::Vector4D()
{
	x = 0;
	y = 0;
	z = 0;
	t = 0;
}

template <typename T>
Vector4D<T>::~Vector4D()
{

}
#endif // _VECTOR4D_H_
