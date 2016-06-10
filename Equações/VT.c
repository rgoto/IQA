#include <stdio.h>
#include <math.h>
double VT(double VT) {
	double q6, a;
		if(VT >15){
		return 9;
		}
	a = (VT + 0.1815) * (VT + 0.1815);
    q6 = 1 / (0.0003869 * a + 0.01081);
	return q6;
}
