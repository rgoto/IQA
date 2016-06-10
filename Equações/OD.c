#include <stdio.h>
#include <math.h>
double OD(double OD) {
	double q9, a;
	if(OD == 140){
		return 47;
	}
	a = (OD + (-106)) * (OD + (-106));
	q9 = 100.8 * exp(a / -3745);
	return q9;
}
