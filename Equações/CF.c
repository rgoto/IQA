#include <stdio.h>
#include <math.h>

double CF (double CF){

double A = 98.03, B = -36.45, C = 3.138, D = 0.06776;


if (CF > 1000000){


	return 3;

}else{

Q1 = A + ( B * log10(CF)) + ( C * pow( log10(CF), 2 )) + (D * pow( log10(CF), 3 ));


return Q1;
}
 
}
