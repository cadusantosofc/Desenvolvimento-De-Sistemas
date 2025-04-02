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
	
	media = (nota1 + nota2) / 2;
	
	
	if(media >= 9){
		
		printf("%s Você tirou nota %.2f e ficou com um MB!\n\n", nome, media);
	} 
	
	if(media < 9 && media >= 7){
		
		printf("%s Você tirou nota %.2f e ficou com um B!\n\n", nome, media);
	} 	
	
	if(media < 7 && media >= 5 ){
		
		printf("%s Você tirou nota %.2f e ficou com um R!\n\n", nome, media);
	} 
	
	if(media < 5 ){
		
		printf("%s Você tirou nota %.2f e ficou com um I!\n\n", nome, media);
	} 

	system("pause");
	return 0;
}
