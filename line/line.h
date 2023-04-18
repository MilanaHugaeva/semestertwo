#pragma once
#include "../point/point.h"

namespace miit::figure
{
	class line
	{
	public:
		line(const point& start, const point& end);

		const point& getStart() const;
		const point& getEnd() const;
	private:
		const point& start;
		const point& end;
	};
}