#include <stdio.h>
#include <math.h>
#include "funcoes.h"

int main (void){
	double cf, dbo, ft, nt, od, ph, st, tu, vt;

		printf(ANSI_COLOR_RED "\n\nDigite abaixo os parâmetros: \n \n" ANSI_COLOR_RESET);

		printf("Coliformes Fecais (NMP/100mL): ");
			scanf("%lf", &cf);
		printf("DBO (mg/L): ");
			scanf("%lf", &dbo);
		printf("Fósforo Total (mg/L): ");
			scanf("%lf", &ft);
		printf("Nitrogênio Total (mg/L): ");
			scanf("%lf", &nt);
		printf("Oxigênio Dissolvido (%% saturação): ");
			scanf("%lf", &od);
		printf("pH (unidades de pH): ");
			scanf("%lf", &ph);
		printf("Sólidos Totais (mg/L): ");
			scanf("%lf", &st);
		printf("Turbidez (UNT): ");
			scanf("%lf", &tu);
		printf("Variação de Temperatura (°C): ");
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

printf("\nValor de IQA =" ANSI_COLOR_RED " %f\n" ANSI_COLOR_RESET, IQA);
printf("Classificação: ");

if(IQA >= 80 && IQA <= 100){
	printf(ANSI_COLOR_GREEN "Ótima" ANSI_COLOR_RESET "\n\n");

} else if (IQA >= 51 && IQA < 80){
	printf(ANSI_COLOR_BLUE "Boa" ANSI_COLOR_RESET "\n\n");

} else if (IQA >= 37 && IQA < 51){
	printf(ANSI_COLOR_YELLOW "Aceitável" ANSI_COLOR_RESET "\n\n");

} else if (IQA >= 20 && IQA < 37){
	printf(ANSI_COLOR_RED "Ruim" ANSI_COLOR_RESET "\n\n");

} else if (IQA >= 0 && IQA < 20){
	printf(ANSI_COLOR_RED "Péssima" ANSI_COLOR_RESET "\n\n");
}


}