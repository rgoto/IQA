#include <stdio.h>
#include <math.h>
double ST(double ST) {
	double q8;
	if (ST > 500){
		return 32;
	}
	q8 = 80.26 * exp(-0.00107 * ST + 0.03009 * sqrt(ST)) + -0.1185 * ST;
	return q8;
}
