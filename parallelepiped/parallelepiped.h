#pragma once
#include "../point/point.h"
namespace miit::figure
{
	class parallelepiped
	{
		/// <summary>
		/// Создает параллелепипел по трём вершинам  
		/// </summary>
		/// <param name="vertex1">Вершина 1</param>
		/// <param name="vertex2">Вершина 2</param>
		/// <param name="vertex3">Вершина 3</param>
		parallelepiped(const point& vertex1, const point& vertex2, const point& vertex3);
	};
};