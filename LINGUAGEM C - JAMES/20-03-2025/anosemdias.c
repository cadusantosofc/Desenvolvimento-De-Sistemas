#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float anos, meses, dias, resul;
	
	printf("Para calcular sua idade em dias digite: \n");
	
	printf("Qual sua idade em anos: \t");
	scanf ("%f", &anos);
	
	printf("Qual sua idade em meses: \t");
	scanf ("%f", &meses);
	
	printf("Qual sua idade em dias: \t");
	scanf ("%f", &dias);

	resul = (anos * 365) + (meses * 30) + dias;
	
	printf("\n Sua idade em dias é de %.0f \n",resul);

	
	
	system("pause");
	return 0;
}
