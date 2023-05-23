#include <sstream>
#include "parallelepiped.h"
#include "../line/line.h"

miit::figure::parallelepiped::parallelepiped(const point& vertex1, const point& vertex2, const point& vertex3)
	:vertex1(vertex1), vertex2(vertex2.getX(), vertex1.getY(), vertex1.getZ()), vertex3(vertex2), vertex4(vertex3)
{}

miit::figure::parallelepiped::parallelepiped(const double length1, const double length2, const point& point)
	: vertex1(point), vertex2(
		point.getX() + length1,
		point.getY(),
		point.getZ()
	), vertex3(
		point.getX(),
		point.getY(),
		point.getZ() + length1
	), vertex4(
		point.getX(),
		point.getY() + length2,
		point.getZ()
	)
{}

double miit::figure::parallelepiped::math_area() const
{
	auto a = line(vertex1, vertex2).get_length();
	auto b = line(vertex1, vertex3).get_length();
	auto c = line(vertex1, vertex4).get_length();

	return 2 * (a*b + b*c + c*a);
}

double miit::figure::parallelepiped::math_perimeter() const
{
	return (
		line(vertex1, vertex2).get_length()
		+ line(vertex1, vertex3).get_length()
		+ line(vertex1, vertex4).get_length()
	) * 2;
}

miit::figure::point miit::figure::parallelepiped::getVertex1() const
{
	return this->vertex1;
}

miit::figure::point miit::figure::parallelepiped::getVertex2() const
{
	return this->vertex2;
}

miit::figure::point miit::figure::parallelepiped::getVertex3() const
{
	return this->vertex3;
}

miit::figure::point miit::figure::parallelepiped::getVertex4() const
{
	return this->vertex4;
}

std::string miit::figure::toString(const parallelepiped& parallelepiped)
{
	std::stringstream ss;

	ss << "parallelepiped(vertex1=" << parallelepiped.getVertex1()
		<< ", vertex2=" << parallelepiped.getVertex2()
		<< ", vertex3=" << parallelepiped.getVertex3()
		<< ", vertex4=" << parallelepiped.getVertex4()
	<< ")";

	return ss.str();
}

std::ostream& miit::figure::operator<<(std::ostream& ostream, const parallelepiped& parallelepiped)
{
	return ostream << toString(parallelepiped);
}

std::istream& miit::figure::operator>> (std::istream& istream, parallelepiped& parallelepiped)
{
	return istream >> parallelepiped.vertex1 >> parallelepiped.vertex2 >> parallelepiped.vertex3 >> parallelepiped.vertex4;
}