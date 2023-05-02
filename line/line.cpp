#include "line.h"

miit::figure::line::line(const point& start, const point& end)
    : start(start), end(end)
{}

miit::figure::point miit::figure::line::getStart() const
{
    return this->start;
}

miit::figure::point miit::figure::line::getEnd() const
{
    return this->end;
}

double miit::figure::line::get_length() const
{
    return std::sqrt(
        std::pow(this->start.getX() - this->end.getX(), 2)
        + std::pow(this->start.getY() - this->end.getY(), 2)
        + std::pow(this->start.getZ() - this->end.getZ(), 2)
    );
}
