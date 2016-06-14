#include <stdio.h>
#include <math.h>
#include "funcoes.h"

int main (void){
	double cf, dbo, ft, nt, od, ph, st, tu, vt;

		printf("Valor de Cloriformios Fecais\n");
			scanf("%lf", &cf);
		printf("Valor de Demanda Bioquimica de Oxigenio\n");
			scanf("%lf", &dbo);
		printf("Valor de Fosforo Total\n");
			scanf("%lf", &ft);
		printf("Valor de Nitrogenio Total\n");
			scanf("%lf", &nt);
		printf("Valor de Oxidação Dissolvido\n");
			scanf("%lf", &od);
		printf("Valor de pH\n");
			scanf("%lf", &ph);
		printf("Valor de Solidos Totais\n");
			scanf("%lf", &st);
		printf("Valor de Turbidez\n");
			scanf("%lf", &tu);
		printf("Valor de Variação de temperatura\n");
			scanf("%lf", &vt);


double IQA, results[9];

	results[0]=CF(cf);
	results[1]=DBO(dbo);
	results[2]=FT(ft);
	results[3]=NT(nt);
	results[4]=OD(od);
	results[5]=PH(ph);
	results[6]=ST(st);
	results[7]=TU(tu);
	results[8]=VT(vt);


IQA = pow(results[0], 0.15) * pow(results[1], 0.10) * pow(results[2], 0.10) * pow(results[3], 0.10) * pow(results[4], 0.17)
 * pow(results[5], 0.12) * pow(results[6], 0.08) * pow(results[7], 0.08) * pow(results[8], 0.10);

printf("Valor de IQA = %f\n", IQA);
printf("Classificação: ");

if(IQA >= 80 && IQA <= 100){
	printf("Ótima\n");

} else if (IQA >= 51 && IQA < 80){
	printf("Boa\n");

} else if (IQA >= 37 && IQA < 51){
	printf("Aceitável\n");

} else if (IQA >= 20 && IQA < 37){
	printf("Ruim\n");

} else if (IQA >= 0 && IQA < 20){
	printf("Péssima\n");
} 


}