#include <stdio.h>
#include <locale.h>

/*  Crie um software que peça a nota da prova e da recuperação de Português e de Matemática e a frequencia do aluno
	
	Responda aprovado se a nota ou a recuperação de Português e Matemática for maior ou igual a cinco e a frequência maior ou igual a 0.75 e reprovado em caso contrário.
	
*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float pr, mat, por, fre;
	
	
	printf("Qual a nota da prova: \t");
	scanf ("%f", &pr);
	printf("Qual a nota da recuperação de Português: \t");
	scanf ("%f", &por);
	printf("Qual a nota da recuperação de Matemática: \t");
	scanf ("%f", &mat);
	printf("Qual a Frequencia: \t");
	scanf ("%f", &fre);
	
	if(pr >= 5 && por >= 5 && mat >= 5 && fre >= 0.75 ){
		printf("\n Aprovado \n");
	}else{
		printf("\n Reprovado!!! \n");
	}
	


	
	
	system("pause");
	return 0;
}
