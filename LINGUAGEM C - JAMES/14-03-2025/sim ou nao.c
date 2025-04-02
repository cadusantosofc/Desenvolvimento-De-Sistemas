#include <stdio.h>
#include <locale.h>

/*  Crie um software que pe�a a nota da prova e da recupera��o de Portugu�s e de Matem�tica e a frequencia do aluno
	
	Responda aprovado se a nota ou a recupera��o de Portugu�s e Matem�tica for maior ou igual a cinco e a frequ�ncia maior ou igual a 0.75 e reprovado em caso contr�rio.
	
*/

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float rep, pma, rema, fre, pp;
	
	
	printf("Qual a nota da prova de Portugu�s: \t");
	scanf ("%f", &pp);
	printf("Qual a nota da recupera��o de Portugu�s: \t");
	scanf ("%f", &rep);
	printf("Qual a nota da prova de Matematica: \t");
	scanf ("%f", &pma);
	printf("Qual a nota da recupera��o de Matem�tica: \t");
	scanf ("%f", &rema);
	printf("Qual a Frequencia: \t");
	scanf ("%f", &fre);
	
	if((pp >= 5 || rep >= 5) && (pma >= 5 || rema >= 5) && fre >= 0.75){
		printf("\n Aprovado \n");
	}else{
		printf("\n Reprovado \n");
	}	
	
	system("pause");
	return 0;
}
