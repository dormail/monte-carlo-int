/*** main.cpp start ***/

#include <iostream>
#include <random>
#include <cmath>
#include <fstream>

constexpr double pi = 3.1415927;

class point
{
	public:
		double x,y;

		// constructor
		point(double X, double Y) : x(X), y(Y){};

		// set both x and y to random values
		void random (std::random_device& gen,
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



		void print(){
			std::cout << "x =\t" << x 
				<< "\ny =\t" << y << std::endl;
		}
};

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());

	point a = point(3,4);

	// a.print();
	// a.random(rd, -2. ,2. ,-2. ,2.);
	// a.print();
	// a.random(rd, -2. ,2. ,-2. ,2.);
	// a.print();

	std::ofstream output;
	output.open("ouput.csv");
	output << "x,y,loc\n";
	
	unsigned int run = 1000000;
	unsigned int i = 0;

	bool inside = true; // a bool which decides if a is inside the shape or not
	double r = 1.; // the size of the area (and some variable in the function)

	while(i < run)
	{
		i++;

		a.random(rd, -1 * r, r,-1 * r,r);

		// checking if point is inside of the shape


		output << a.x << "," << a.y << "," << inside << '\n';
	}

	output.close();

	return 0;
}


/*** main.cpp end ***/
