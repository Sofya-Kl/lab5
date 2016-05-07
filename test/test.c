#include <ctest.h>
#include <sqrt.h>

CTEST(sqrt_suite, root_test)
{
	//Given
	const double a = 1.00;
	const double b = -3.00;
	const double c = 2.00;

	//When
	double x1 = 0, x2 = 0;
	const int status = func(a, b, c, &x1, &x2);

	//Then
	const double expected_x1 = 2.00;
	const double expected_x2 = 1.00;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(2, status);
}


