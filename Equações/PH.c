#include <stdio.h>
#include <math.h>

double PH (double PH){

double Q2, A = 0.05421, B = 1.23, C = -0.09873;

if (PH >= 12){

	return 3.0;

}else if (PH < 2){


	return 2.0;

}else{


	Q2 = A * pow(PH, ((B * PH) + (C * pow( PH , 2 )))) + 5.213;

return Q2;

}	

}