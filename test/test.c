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
