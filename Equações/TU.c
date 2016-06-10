#include <stdio.h>
#include <math.h>
double TU(double TU) {
	double q7;
	if(TU > 100){
		return 5;
	}
	q7 = 97.34 * exp(-0.01139 * TU + -0.04917 * sqrt(TU));
	return q7;
}
