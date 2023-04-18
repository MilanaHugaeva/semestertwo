#pragma once
#include "../point/point.h"

namespace miit::figure
{
	class parallelogram
	{
	public:
		/// <summary>
		/// ������� �������������� �� ��� ������ 
		/// </summary>
		/// <param name="vertex1">������� 1</param>
		/// <param name="vertex2">������� 2</param>
		/// <param name="vertex3">������� 3</param>
		parallelogram(const point& vertex1, const point& vertex2, const point& vertex3);

		const point& vertex1() const;
		const point& vertex2() const;
		const point& vertex3() const;

	private:
		const point& vertex1;
		const point& vertex1;
		const point& vertex1;
	};
}