
#include <stdio.h>
#include <math.h>

double FT (double FT){
	double q5, b;
	if(FT>10){
		return 1;
	}
		b = -1.680 * pow(FT,0.3325);
		q5 = 213.7 * exp(b);
return q5;

}