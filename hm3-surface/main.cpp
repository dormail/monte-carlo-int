/*** main.cpp start ***/

#include <iostream>
#include <random>
#include <cmath>

constexpr double pi = 3.1415927;

class point{
	public:
		double x,y;

		point(double X, double Y) : x(X), y(Y){};
		void print(){
			std::cout << "x =\t" << x 
				<< "\n y =\t" << y << std::endl;
		}
};

int main(){
	point a = point(3,4);
	a.print();
	return 0;
}


/*** main.cpp end ***/
