#pragma once
#include <iostream>
#define Pi acos(-1)

namespace mt
{
	struct Point
	{
		int x;
		int y;
	};
	class Circle
	{
	public:

		Circle();
		Circle(double R, Point M);
		~Circle();

		double Square();
		double Perimeter();
		void SetR(double R);
		int GetR();
		void SetM(Point M);

	private:
		Point m_M;
		double m_R;
	};
}
