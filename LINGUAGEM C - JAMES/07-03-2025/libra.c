#include <stdio.h>
#include <locale.h>

// Considerando que uma libra equivale a 453.6 gramas, crie um software que
// Pergunte se a convers�o ser� de quilograma para libra ou de libra para quilograma
// Em seguida pe�a o valor e apresente a convers�o para o peso equivalente.

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	int op;
	float kg, lb;
	
	printf("Sua convers�o ser� de libra ou kilos. \nDigite:\n - 1 Para kilograma em libra: \n - 2 Para libra em quilogramas: \n\n\t");
	scanf ("%d", &op);
	
	
	if(op == 1){
		printf("Digite o peso em quilogramas: \n");
		scanf ("%f", &kg);
		lb = kg / 0.4536;
		printf("%.2f quilogramas equivalem a %.2f libras \n\n",kg, lb);
	}

	if(op == 2){
		printf("Digite o peso em Libras: \n");
		scanf ("%f", &lb);
		kg = lb * 0.4536;
		printf("%.2f libras equivalem a %.2f quilogramas \n\n",lb, kg);
	}
	
	system("pause");
	return 0;
}
