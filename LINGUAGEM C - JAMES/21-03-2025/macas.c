#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float macas, soma;
	
	
	printf("Quantas ma��s deseja comprar: \t\n");
	scanf ("%f", &macas);
	
	if(macas >= 12){
		soma = macas * 1;
		printf("\nVoc� ira comprar %.0f ma��s e custara R$ %.2f \n", macas, soma);
	}
	
	else{
		soma = macas * 1.30;
		printf("\nVoc� ira comprar %.0f ma��s e custara R$ %.2f  \n", macas, soma);
	}
	
	
	system("pause");
	return 0;
}
