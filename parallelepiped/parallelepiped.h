#pragma once
#include "../point/point.h"
namespace miit::figure
{
	class parallelepiped
	{
	public:
		/// <summary>
		/// Создает параллелепипел по трём вершинам  
		/// </summary>
		/// <param name="vertex1">Вершина 1</param>
		/// <param name="vertex2">Вершина 2</param>
		/// <param name="vertex3">Вершина 3</param>
		parallelepiped(const point& vertex1, const point& vertex2, const point& vertex3);

		/// <summary>
		/// Создает параллелепипел по вершине и двум сторонам  
		/// </summary>
		/// <param name="length1">Сторона 1</param>
		/// <param name="length2">Сторона 2</param>
		/// <param name="point">Вершина</param>
		parallelepiped(const double length1, const double length2, const point& point);

		/// <summary>
		/// Вычисление площади параллелепипеда  
		double math_area() const;

		/// <summary>
		/// Вычисление периметра параллелепипеда
		/// </summary>
		double math_perimeter() const;

		/// <summary>
		/// Получение 1 вершины
		/// </summary>
		point getVertex1() const;

		/// <summary>
		/// Получение 2 вершины
		/// </summary>
		point getVertex2() const;

		/// <summary>
		/// Получение 3 вершины
		/// </summary>
		point getVertex3() const;
		
		/// <summary>
		/// Получение 4 вершины
		/// </summary>
		point getVertex4() const;

		/// <summary>
		///Переопределение параллелепипеда в сторку
		/// </summary>
		friend std::string toString(const parallelepiped& parallelepiped);
		friend std::ostream& operator<< (std::ostream& stream, const parallelepiped& parallelepiped);
		friend std::istream& operator>> (std::istream& stream, parallelepiped& parallelepiped);
	private:
		point vertex1;
		point vertex2;
		point vertex3;
		point vertex4;
	};
};