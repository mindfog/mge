#pragma once

#include <iostream>

namespace mge
{
	namespace math
	{
		struct vec2
		{
			union
			{
				struct
				{
					float x, y;
				};
				float values[2];
			};

			/// --- CONSTRUCTOR/DESTRUCTOR ---
			vec2(const float& x = 0, const float& y = 0);

			/// --- MEMBER FUNCTIONS ---
			vec2& Add(const vec2& rhs);
			vec2& Sub(const vec2& rhs);
			vec2& Multiply(const vec2& rhs);			
			vec2& Divide(const vec2& rhs);

			vec2& Add(float k);
			vec2& Sub(float k);
			vec2& Multiply(float k);
			vec2& Divide(float k);

			/// --- OPERATORS --- 	
			float& operator[](unsigned int i);			
			float& const operator[](unsigned int i) const;

			vec2 operator+(const vec2& v);
			vec2 operator-(const vec2& v);

			vec2& operator+=(const vec2& rhs);
			vec2& operator-=(const vec2& rhs);
			vec2& operator*=(const vec2& rhs);
			vec2& operator/=(const vec2& rhs);

			vec2& operator+=(float k);
			vec2& operator-=(float k);
			vec2& operator*=(float k);
			vec2& operator/=(float k);

			bool operator==(const vec2& rhs);
			bool operator!=(const vec2& rhs);

			/// --- FRIEND FUNCTIONS/OPERATORS ---
			friend vec2& operator+(vec2 lhs, const vec2& rhs);
			friend vec2& operator-(vec2 lhs, const vec2& rhs);
			friend vec2& operator*(vec2 lhs, const vec2& rhs);
			friend vec2& operator/(vec2 lhs, const vec2& rhs);
			
			friend vec2& operator+(vec2 lhs, float k);
			friend vec2& operator-(vec2 lhs, float k);
			friend vec2& operator*(vec2 lhs, float k);
			friend vec2& operator/(vec2 lhs, float k);

			friend std::ostream& operator<<(std::ostream& stream, const vec2& rhs);
		};
	} // namespace math
} // namespace mge