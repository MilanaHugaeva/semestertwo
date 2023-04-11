#include <sstream>
#include "point.h"

using namespace miit::figure;

point::point(double x, double y, double z) : x(x), y(y), z(z)
{}

double point::getX() const
{
	return this->x;
}

double point::getY() const
{
	return this->y;
}

double point::getZ() const
{
	return this->z;
}

const std::string toString()
{
	return "";
}

std::ostream& miit::figure::operator<<(std::ostream& stream, const point* point)
{
	stream << "Point(" << point->getX() << "," << point->getY() << "," << point->getZ() << ")";
}

const std::string point::toString()
{
	std::stringstream ss;
	ss << this;
	return ss.str();
}