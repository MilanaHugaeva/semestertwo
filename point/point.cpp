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

std::ostream& miit::figure::operator<<(std::ostream& stream, const point& point)
{
	stream << "Point(" << point.getX() << "," << point.getY() << "," << point.getZ() << ")";
}

std::istream& miit::figure::operator>>(std::istream& stream, const point& point)
{
	// TODO: вставьте здесь оператор return
}

bool miit::figure::operator==(const point& left, const point& right)
{
	return false;
}

const std::string point::toString()
{
	std::stringstream ss;
	ss << this;
	return ss.str();
}