#include <iostream>
#include "../parallelepiped/parallelepiped.h"
#include "../helplib/math.h"

using namespace miit::figure;

int main()
{
	point vertex1 = point(0, 0, 0);
	point vertex2 = point(0, 10, 0);
	point vertex3 = point(10, 10, 10);

	parallelepiped paral_1 = parallelepiped(vertex1, vertex2, vertex3);
	double a = paral_1.math_perimeter();
	std::cout << a << std::endl;
	std::cout << miit::help::math::is_equal_doubles(a, static_cast<double>(346.41));

	return 0;
}