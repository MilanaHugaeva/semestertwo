#include "parallelogram.h"

miit::figure::parallelogram::parallelogram(const point& vertex1, const point& vertex2, const point& vertex3)
	: vertex1(vertex1), vertex2(vertex2), vertex3(vertex3)
{}

miit::figure::point miit::figure::parallelogram::getVertex1() const
{
	return this->vertex1;
}

miit::figure::point miit::figure::parallelogram::getVertex2() const
{
	return this->vertex2;
}

miit::figure::point miit::figure::parallelogram::getVertex3() const
{
	return this->vertex3;
}
