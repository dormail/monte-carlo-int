/*** main.cpp start ***/

#include <iostream>
#include <random>
#include <cmath>

constexpr double pi = 3.1415927;

class point
{
	public:
		double x,y;

		// constructor
		point(double X, double Y) : x(X), y(Y){};

		// set both x and y to random values
		void random (std::mt19937 gen,
				double x_min, 
				double x_max, 
				double y_min,
				double y_max) 
		{
			// two random num gens for x and y respectivly
			std::uniform_real_distribution<> dis1(x_min,x_max);
			std::uniform_real_distribution<> dis2(y_min,y_max);

			x = dis1(gen);
			y = dis2(gen);
		}



		// void print(){
		// 	std::cout << "x =\t" << x 
		// 		<< "\ny =\t" << y << std::endl;
		// }
};

int main()
{
	point a = point(3,4);

	return 0;
}


/*** main.cpp end ***/
