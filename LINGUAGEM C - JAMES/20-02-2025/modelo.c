#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	char nome[20];
	int mat;
	float nota;
	
	printf("Digite o nome: \n");
	scanf (" %[^\n]s", nome);
	
	printf("Digite o número de matrícula: \n");
	scanf (" %d", &mat);
	
	printf("Digite a nota: \n");
	scanf (" %f", &nota);
	
	
	
	printf("O aluno %s de matrícula %d tem nota %.2f \n\n", nome, mat, nota);
	
	system("pause");
	return 0;
}
