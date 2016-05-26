#include <ctest.h>
#include <quad_equ.h>

CTEST(quad_equ_suite, zeroes)
{
    const double a = 0;
    const double b = 0;
    const double c = 0;

    const Coef equ = quadEqu(a, b, c);
    
    const double expected_d = 0;

    ASSERT_EQUAL(expected_d, equ.d);
}

CTEST(quad_equ_suite, negative_discriminant)
{
    const double a = 4;
    const double b = 0;
    const double c = 3;

    const Coef equ = quadEqu(a, b, c);

    const double expected_d = -48;

    ASSERT_DBL_NEAR(expected_d, equ.d);
}

CTEST(quad_equ_suite, one_root)
{
    const double a = 1;
    const double b = -2;
    const double c = 1;

    const Coef equ = quadEqu(a, b, c);

    const Coef expectedCoef = {0, 1};

    ASSERT_DBL_NEAR(expectedCoef.d, equ.d);
    ASSERT_DBL_NEAR(expectedCoef.x1, equ.x1);
}

CTEST(quad_equ_suite, two_roots)
{
    const double a = 2;
    const double b = -3;
    const double c = 1;

    const Coef equ = quadEqu(a, b, c);

    const Coef expectedCoef = {1, 1, 0.5};

    ASSERT_DBL_NEAR(expectedCoef.d, equ.d);
    ASSERT_DBL_NEAR(expectedCoef.x1, equ.x1);
    ASSERT_DBL_NEAR(expectedCoef.x2, equ.x2);
}
