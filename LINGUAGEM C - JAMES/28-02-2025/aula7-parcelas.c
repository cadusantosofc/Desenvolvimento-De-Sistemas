#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	char nome[20];
	float renda, valor, parcelas, soma, vcinco;
	
	printf("Qual o seu nome: \n");
	scanf ("%[^\n]s", &nome);
	
	printf("Qual o valor da compra: \n");
	scanf ("%f", &valor);
	
	printf("Qual a sua renda: \n");
	scanf ("%f", &renda);
	
	printf("Quantas parcelas prefere: \n");
	scanf ("%f", &parcelas);
	
	
	vcinco = renda / 4;
	soma = valor / parcelas;
	
	
	if(soma <= vcinco){
		
		printf("%s Seu crédito foi aprovado com %.f parcelas de %2.f!\n\n", nome, parcelas, soma);
	} 
	
	else{
		
		printf("%s Seu crédito foi reprovado com %.f parcelas de R$%2.f .Ultrapassando 25%% da sua renda!\n\n", nome, parcelas, soma);
	} 
	
	system("pause");
	return 0;
}
