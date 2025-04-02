#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float salario, carros, fixocarro, totaldevendas, conta;
	
	printf("Qual seu salario fixo: \n\n");
	scanf ("%f", &salario);
	
	printf("Quanto recebe fixo por carro vendido: \n\n");
	scanf ("%f", &fixocarro);
	
	printf("Quantos carros foram vendidos: \n\n");
	scanf ("%f", &carros);
	
	printf("Qual o valor total de vendas: \n\n");
	scanf ("%f", &totaldevendas);
	
	conta = salario + (carros * fixocarro) + (0.05 * totaldevendas);
	
	printf("O valor final do seu salario será de %.2f reais. \n\n", conta);

	system("pause");
	return 0;
}
