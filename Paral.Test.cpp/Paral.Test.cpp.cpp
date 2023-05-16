#include "pch.h"
#include "CppUnitTest.h"
#include "../parallelepiped/parallelepiped.h"
#include "../helplib/math.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::figure;
namespace ParalTestcpp
{
	TEST_CLASS(ParalTestcpp)
	{
	public:
		
		TEST_METHOD(GetAreaTestParall_Valid_Data)
		{
			point vertex1 = point(0, 0, 0);
			point vertex2 = point(0, 10, 0);
			point vertex3 = point(10, 10, 10);
			parallelepiped paral_1 = parallelepiped(vertex1, vertex2, vertex3);
			//double exp_area = 346.41;
			//Assert::IsTrue(miit::help::math::is_equal_doubles(exp_area, paral_1.math_area()));
		}
	};
}
