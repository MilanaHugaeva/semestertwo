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
		explicit point(double x, double y, double z);

		/// <summary>
		/// Получить x компоненту точки 
		/// </summary>
		/// <returns> x компонента точки</returns>
		double x() const;

		/// <summary>
		/// Получить y компоненту точки 
		/// </summary>
		/// <returns> y компонента точки</returns>
		double y() const;

		/// <summary>
		/// Получить z компоненту точки 
		/// </summary>
		/// <returns> z компонента точки</returns>
		double z() const;

		/// <summary>
		/// Получить String представление точки
		/// </summary>
		/// <returns> String представление точки </returns>
		friend const std::string toString();

		friend std::ostream& operator<< (std::ostream&, const point*);
		friend std::istream& operator>> (std::istream&, const point*&);
		friend bool operator== (const point&, const point&);


	private:
		double x;
		double y;
		double z;
	};
}

