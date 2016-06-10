#include <stdio.h>
#include <math.h>


double NT (double NT){


	if (NT > 100){

		return 1;
	}else{

		double Q4, A = 98.96, B = -0.2232, C = -0.006457;

		Q4 = A * pow(NT, (B + (C*NT)));

		return Q4;

	}
}