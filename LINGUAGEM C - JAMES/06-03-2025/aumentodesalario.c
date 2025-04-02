#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float salario, soma;
	
	printf("Digite qual seu salario: \n\n");
	scanf ("%f", &salario);
	
	if(salario <= 3000){
		soma = (salario * 0.05) + salario;
		printf("Seu novo salario será de %.2f reais com aumento de 5%%. \n\n", soma);
	}

	if(salario > 3000){
		soma = (salario * 0.035) + salario;	
		printf("Seu novo salario será de %.2f reais com aumento de 3,5%%. \n\n", soma);
	}
	
	system("pause");
	return 0;
}
