#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	char nome[20];
	float n1, n2, me;
	
	printf("Digite o nome: \n");
	scanf (" %[^\n]s", nome);
	
	printf("Digite a primeria nota: \n");
	scanf (" %f", &n1);
	
	printf("Digite a segunda nota: \n");
	scanf (" %f", &n2);
	
	me = (n1 +n2) / 2;
	
	if(me >= 5){
		printf("O aluno %s foi aprovado com média %.2f \n\n", nome, me);
	}
	else {
		printf("O aluno %s foi reprovado com média %.2f \n\n", nome, me);
	}
	
	system("pause");
	return 0;
}
