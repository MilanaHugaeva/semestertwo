#pragma once
#include "../point/point.h"
namespace miit::figure
{
	class parallelepiped
	{
		/// <summary>
		/// ������� �������������� �� ��� ��������  
		/// </summary>
		/// <param name="vertex1">������� 1</param>
		/// <param name="vertex2">������� 2</param>
		/// <param name="vertex3">������� 3</param>
		parallelepiped(const point& vertex1, const point& vertex2, const point& vertex3);
	};
};