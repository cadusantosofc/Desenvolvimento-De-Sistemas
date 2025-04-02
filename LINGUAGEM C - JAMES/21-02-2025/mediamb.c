#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	char nome[20];
	float nota1, nota2, media;
	
	printf("Qual o seu nome: \n");
	scanf ("%[^\n]s", &nome);
	
	printf("Qual a nota 1: \n");
	scanf ("%f", &nota1);
	
	printf("Qual a nota 2: \n");
	scanf ("%f", &nota2);
	
	media = (nota1 + nota2) / 2
	
	
	if(media == 9){
		{
		printf("As medida formam um tringulo equilatero!\n\n");
	}
		else{
		if(a != b && a != c && b != c){
		printf("As medida formam um tringulo isóceles! \n");
		}
			else{
			printf("As medida formam um triângulo isóceles! \n");
			}
		}
	}


	else{
		printf("Estas medidas não podem formar um triângulo! \n");
		}

	system("pause");
	return 0;
}
