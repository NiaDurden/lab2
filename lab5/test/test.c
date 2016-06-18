#include <ctest.h>
#include <math.h>


CTEST(equation_suite, uno_roots)
{
	const double a = 0;
	const double b = 2;
	const double c = 3;

	double x;
	diskr(a, b, c);

	const double uno_roots = -1.5;

	ASSERT_DBL_NEAR(uno_roots, x);
}

CTEST(equation_suite, dos_roots)
{
	const double a = 2;
	const double b = 3;
	const double c = 1;

	double x1;
	double x2;
	diskr(a, b, c);

	const double uno_roots = -0.5;
	const double dos_roots = -1;

	ASSERT_DBL_NEAR(uno_roots, x1);
	ASSERT_DBL_NEAR(dos_roots, x2);
}

/*
CTEST(equation_suite, whatever_test)
{
	const double a = 0;
	const double b = 0;
	const double c = 0;

	double x;
	diskr(a, b, c);

	const double uno_roots = whatever;

	ASSERT_DBL_NEAR(uno_roots, x);
}*/

