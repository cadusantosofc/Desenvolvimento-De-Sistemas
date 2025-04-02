#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float lp, vc, vv, ir, ll;
	
	printf("Digite qual o valor de compra: \t");
	scanf ("%f", &vc);
	
	printf("Digite qual o valor de venda: \t");
	scanf ("%f", &vv);
	
	if(vc <= vv){
		lp = vv - vc;
		ir = lp * 0.20;
		ll = lp * 0.80;
		printf("Você vendeu com ganho de capital de R$%.2f \n Deverá pagar R$%.2f de imposto de renda \n e terá lucro final de R$%.2f \n\n", lp, ir, ll);
	}

	else{
		lp = vc - vv;
		printf("Você tomou um prejuizo de %.2f reais nessa venda. \n\n", lp);
	}
	system("pause");
	return 0;
}
