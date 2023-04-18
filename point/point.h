#pragma once
#include <iostream>
namespace miit::figure
{
	class point
	{
	public:
		/// <summary>
		/// Конструктор класса point
		/// </summary>
		/// <param name="x"> x компонента точки </param>
		/// <param name="y"> y компонента точки </param>
		/// <param name="z"> z компонента точки </param>
		point(double x, double y, double z);

		/// <summary>
		/// Получить x компоненту точки 
		/// </summary>
		/// <returns> x компонента точки</returns>
		double getX() const;

		/// <summary>
		/// Получить y компоненту точки 
		/// </summary>
		/// <returns> y компонента точки</returns>
		double getY() const;

		/// <summary>
		/// Получить z компоненту точки 
		/// </summary>
		/// <returns> z компонента точки</returns>
		double getZ() const;

		/// <summary>
		/// Получить String представление точки
		/// </summary>
		/// <returns> String представление точки </returns>
		const std::string toString();

		friend std::ostream& operator<< (std::ostream& stream, const point& point);
		friend std::istream& operator>> (std::istream& stream, point& point);
		friend bool operator== (const point& left, const point& right);
		friend bool operator!= (const point& left, const point& right);

	private:
		double x;
		double y;
		double z;
	};
}

