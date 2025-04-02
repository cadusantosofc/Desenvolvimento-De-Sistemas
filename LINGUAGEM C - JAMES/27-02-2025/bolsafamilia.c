#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float rf, rmf, pf, bf;
	
	printf("Digite qual sua renda: \n");
	scanf ("%f", &rf);
	
	printf("Digite quantas pessoas mora na sua casa: \n");
	scanf ("%f", &pf);
	
	rmf = pf * 218;
	
	if(rf >= rmf){
		printf("Essa familia não tem direito. \n\n");
	}

	else{
		bf = rmf - rf;
		printf("Essa familia tem direto ao auxilio no valor de R$%.2f  \n\n", bf); 
	}
	system("pause");
	return 0;
}
