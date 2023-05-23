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
		TEST_METHOD(GetArea_ValidData_Success)
		{
			const auto vertex1 = point(0, 0, 0);
			const auto vertex2 = point(0, 10, 0);
			const auto vertex3 = point(10, 10, 10);
			const auto paral_1 = parallelepiped(vertex1, vertex2, vertex3);
			const auto exp_area = 346.41016151377551;
			const auto actual = paral_1.math_area();

			Assert::IsTrue(miit::help::math::is_equal_doubles(exp_area, actual));
		}

		TEST_METHOD(GetPerimeter_ValidData_Success)
		{
			const auto vertex1 = point(0, 0, 0);
			const auto vertex2 = point(0, 10, 0);
			const auto vertex3 = point(10, 10, 10);
			const auto paral_1 = parallelepiped(vertex1, vertex2, vertex3);
			const auto exp_area = 54.641016151377549;
			const auto actual = paral_1.math_perimeter();

			Assert::IsTrue(miit::help::math::is_equal_doubles(exp_area, actual));

		}
	};
}

