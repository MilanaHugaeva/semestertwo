#pragma once
#include <iostream>
namespace miit::figure
{
	class point
	{
	public:
		/// <summary>
		/// ����������� ������ point
		/// </summary>
		/// <param name="x"> x ���������� ����� </param>
		/// <param name="y"> y ���������� ����� </param>
		/// <param name="z"> z ���������� ����� </param>
		explicit point(double x, double y, double z);

		/// <summary>
		/// �������� x ���������� ����� 
		/// </summary>
		/// <returns> x ���������� �����</returns>
		double x() const;

		/// <summary>
		/// �������� y ���������� ����� 
		/// </summary>
		/// <returns> y ���������� �����</returns>
		double y() const;

		/// <summary>
		/// �������� z ���������� ����� 
		/// </summary>
		/// <returns> z ���������� �����</returns>
		double z() const;

		/// <summary>
		/// �������� String ������������� �����
		/// </summary>
		/// <returns> String ������������� ����� </returns>
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

