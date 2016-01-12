#ifndef _MATHS_H_
#define _MATHS_H_

#include "Vector4D.h"
#include "Vector3D.h"
#include "Vector2D.h"

namespace Maths
{
	template<typename T>
	const T Lerp(const T ac_Num1, const T ac_Num2, const float ac_T);

	template<typename T>
	const T ToRadians(const T ac_Degrees);
	template<typename T>
	const T ToDegrees(const T ac_Radians);
}

namespace Maths
{
	template<typename T>
	const T Lerp(const T ac_Num1, const T ac_Num2, const float ac_T)
	{
		return ac_T * ac_Num2 + (1 - ac_T) * ac_Num1;
	}

	template<typename T = float>
	const T ToRadians(const T ac_Degrees)
	{
		return ac_Degrees * (PI / 180);
	}
	template<typename T = float>
	const T ToDegrees(const T ac_Radians)
	{
		return ac_Radians * (180 / PI);
	}
}
#endif // _MATHS_H_
