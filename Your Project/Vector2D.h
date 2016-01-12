#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

#define PI 3.1415926535897932384626433832795

template <typename T>
class Vector2D
{
private:
	T x, y;

public:
	const T Magnitude() const;
	const Vector2D<T> Normalize() const;

	template <typename T, typename U>
	friend const T Dot(const Vector2D<T>& ac_Vector1, const Vector2D<U>& ac_Vector2);
	template <typename T, typename U>
	friend const T Angle(const Vector2D<T>& ac_Vector1, const Vector2D<U>& ac_Vector2);

	template <typename U>
	friend const Vector2D<T> Lerp(const Vector2D<T>& ac_Vector1, const Vector2D<U>& ac_Vector2, const float ac_T);

	const T GetX() const;
	const T GetY() const;

	void Print() const;

	Vector2D(const T ac_X, const T ac_Y);
	Vector2D();
	~Vector2D();


};
template <typename T>
const T Vector2D<T>::Magnitude() const
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
template <typename T>
const Vector2D<T> Vector2D<T>::Normalize() const
{
	Vector2D<T> NewVector(x / Magnitude(), y / Magnitude());

	return NewVector;
}

template <typename T, typename U>
const T Dot(const Vector2D<T>& ac_Vector1, const Vector2D<U>& ac_Vector2)
{
	T DotProduct =
		ac_Vector1.x*ac_Vector2.x +
		ac_Vector1.y*ac_Vector2.y;

	return DotProduct;
}

template <typename T, typename U>
const T Angle(const Vector2D<T>& ac_Vector1, const Vector2D<U>& ac_Vector2)
{
	T AngleBetween = acos(Dot(ac_Vector1.Normalize(), ac_Vector2.Normalize())) * (180 / PI);

	return AngleBetween;
}

template<typename T, typename U>
const Vector2D<T> Lerp(const Vector2D<T>& ac_Vector1, const Vector2D<U>& ac_Vector2, const float ac_T)
{
	return ac_Vector2 * ac_T + (1 - ac_T) * ac_Vector1;
}

template <typename T>
const T Vector2D<T>::GetX() const
{
	return x;
}
template <typename T>
const T Vector2D<T>::GetY() const
{
	return y;
}

template <typename T>
void Vector2D<T>::Print() const
{
	std::cout << x << ", " << y << " " << std::endl;
}

template <typename T>
Vector2D<T>::Vector2D(const T ac_X, const T ac_Y)
{
	x = ac_X;
	y = ac_Y;
}
template <typename T>
Vector2D<T>::Vector2D()
{
	x = 0;
	y = 0;
}

template <typename T>
Vector2D<T>::~Vector2D()
{

}

template <typename T>
const Vector2D<T> operator-(const Vector2D<T>& ac_Vector1)
{
	Vector2D<T> NewVector(-ac_Vector1.GetX(), -ac_Vector1.GetY());

	return NewVector;
}
template <typename T>
const Vector2D<T> operator+(const Vector2D<T>& ac_Vector1, const Vector2D<T>& ac_Vector2)
{
	Vector2D<T> NewVector(
		ac_Vector1.GetX() + ac_Vector2.GetX(),
		ac_Vector1.GetY() + ac_Vector2.GetY());

	return NewVector;
}
template <typename T>
const Vector2D<T> operator-(const Vector2D<T>& ac_Vector1, const Vector2D<T>& ac_Vector2)
{
	return -ac_Vector1 + ac_Vector2;
}

template <typename T>
const Vector2D<T> operator*(const Vector2D<T>& ac_Vector1, const Vector2D<T>& ac_Vector2)
{
	Vector2D<T> NewVector(
		ac_Vector1.GetX() * ac_Vector2.GetX(),
		ac_Vector1.GetY() * ac_Vector2.GetY(),
		ac_Vector1.GetZ() * ac_Vector2.GetZ());

	return NewVector;
}
template <typename T>
const Vector2D<T> operator*(const Vector2D<T>& ac_Vector1, const float ac_Num)
{
	Vector2D<T> NewVector(
		ac_Vector1.GetX() * ac_Num,
		ac_Vector1.GetY() * ac_Num);

	return NewVector;
}
template <typename T>
const Vector2D<T> operator*(const float ac_Num, const Vector2D<T>& ac_Vector1)
{
	return ac_Vector1 * ac_Num;
}
#endif // _VECTOR2D_H_