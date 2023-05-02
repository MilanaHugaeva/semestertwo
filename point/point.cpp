#include <sstream>
#include <limits>
#include "point.h"

using namespace miit::figure;

point::point(const double x, const double y, const double z) : x(x), y(y), z(z)
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
	return stream << "Point(" << point.getX() << "," << point.getY() << "," << point.getZ() << ")";
}

std::istream& miit::figure::operator>>(std::istream& stream, point& point)
{
	return stream >> point.x >> point.y >> point.z;
}

bool miit::figure::operator==(const point& left, const point& right)
{
	constexpr double epsilon = std::numeric_limits<double>::epsilon();

	return std::abs(left.x - right.x) < epsilon &&
		std::abs(left.y - right.y) < epsilon &&
		std::abs(left.z - right.z) < epsilon;
}

bool miit::figure::operator!=(const point& left, const point& right)
{
	return !operator==(left, right);
}

const std::string toString(const point& point)
{
	std::stringstream ss;
	ss << point;
	return ss.str();
}