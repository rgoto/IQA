#include <stdio.h>
#include <math.h>

double PH (double PH){

if (PH >= 12){

	Q2 = 3.0;

	return Q2;

}else if (PH < 2){


	Q2 = 2.0;

	return Q2;

}else{

Q2 = 0.05421 * (pow (PH, 1.23 * PH * -0.09873 * PH * PH)) + 5.213;

return Q2;

}	

}