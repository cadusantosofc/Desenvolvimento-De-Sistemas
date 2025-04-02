#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float distribuidor, imposto, soma, valor;
	
	printf("Quanto vale o carro de fabrica: \n\n");
	scanf ("%f", &valor);
	
	imposto = valor * 0.45,
	distribuidor = valor * 0.28;
	
	soma = valor + distribuidor + imposto;
	
	printf("O valor final do carro será de %.2f reais. \n\n", soma);

	system("pause");
	return 0;
}
