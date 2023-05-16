#include "pch.h"
#include "CppUnitTest.h"
#include "../helplib/math.h"
#include "../parallelepiped/parallelepiped.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit::figure;

namespace ParallTest
{
	TEST_CLASS(ParallTest)
	{
	public:
		
		TEST_METHOD(GetAreaTestParall_ValidDataSuccess)
		{
			point vertex1 = point(0, 0, 0);
			point vertex2 = point(0, 10, 0);
			point vertex3 = point(10, 10, 10);
			parallelepiped paral_1 = parallelepiped(vertex1, vertex2, vertex3);
			double exp_area = 346.41016151377551;
			Assert::IsTrue(miit::help::math::is_equal_doubles(exp_area, paral_1.math_area()));
		}

		TEST_METHOD(GetPerimetrTestParall_ValidDataSuccess)
		{
			point vertex1 = point(0, 0, 0);
			point vertex2 = point(0, 10, 0);
			point vertex3 = point(10, 10, 10);
			parallelepiped paral_1 = parallelepiped(vertex1, vertex2, vertex3);
			double exp_area = 54.641016151377549;
			Assert::IsTrue(miit::help::math::is_equal_doubles(exp_area, paral_1.math_perimeter()));

		}
	};
}

