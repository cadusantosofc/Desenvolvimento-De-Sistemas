#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float horas, salario, soma, extra;
	
	printf("Digite a quantidade de horas trabalhadas no m�s: \t\n");
	scanf ("%f", &horas);	
	
	printf("Digite seu sal�rio por hora: \t\n");
	scanf ("%f", &salario);
	

	
	if(horas > 160){
		extra = horas - 160;
		soma = (160 * salario) + (extra * salario * 1.5);
		printf("\nO sal�rio total ser� de R$ %.2f \n\n", soma);
	}
	
	else{
		soma = horas * salario;
		printf("\nO sal�rio total ser� de R$ %.2f \n\n", soma);
	}
	
	
	system("pause");
	return 0;
}
