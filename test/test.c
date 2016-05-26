#include <ctest.h>
#include <uravn.h>

CTEST(quad_equ_suite, zeroes)
{
	double d, x1, x2;
    const double a = 0, b = 0, c = 0;

    const int resultat = resh(a, b, c, &d, &x1, &x2);
    
    const double expected_d = 0;

    ASSERT_EQUAL(expected_d, d);
}

CTEST(quad_equ_suite, nulevoy_disc)
{
	double d, x1, x2;
    const double a = 4, b = 0, c = 3;

    const int resultat = resh(a, b, c, &d, &x1, &x2);

    const double expected_d = -48;

    ASSERT_DBL_NEAR(expected_d, d);
}

CTEST(quad_equ_suite, odin_koren)
{
	double d, x1, x2;
    const double a = 1, b = -2, c = 1;

    const int resultat = resh(a, b, c, &d, &x1, &x2);

    const double ex_d = 0, ex_x1 = 1;

    ASSERT_DBL_NEAR(ex_d, d);
    ASSERT_DBL_NEAR(ex_x1, x1);
}

CTEST(quad_equ_suite, dva_korna)
{
	double d, x1, x2;
    const double a = 2, b = -3, c = 1;

    const int resultat = resh(a, b, c, &d, &x1, &x2);

    const double ex_d = 1, ex_x1 = 1, ex_x2 = 0.5;

    ASSERT_DBL_NEAR(ex_d, d);
    ASSERT_DBL_NEAR(ex_x1, x1);
    ASSERT_DBL_NEAR(ex_x2, x2);
}
