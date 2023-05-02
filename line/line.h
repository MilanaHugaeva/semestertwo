#pragma once
#include "../point/point.h"

namespace miit::figure
{
	class line
	{
	public:
		line(const point& start, const point& end);

		/// <summary>
		/// Получение начальной точки стороны
		/// </summary>
		/// <returns></returns>
		point getStart() const;

		/// <summary>
		/// Получение конечной точки стороны 
		/// </summary>
		/// <returns></returns>
		point getEnd() const;

		/// <summary>
		/// Получение расстояния между начальной и конечной точками
		/// </summary>
		/// <returns></returns>
		double get_length() const;
	private:
		const point start;
		const point end;
	};
}