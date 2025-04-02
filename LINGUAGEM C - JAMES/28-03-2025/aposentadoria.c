#include <stdio.h> 
#include <locale.h> 
int main(void){ 
	setlocale(LC_ALL,"Portuguese"); 
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);	
	system("color F0");		 	
	int codigo, nascimento, ingresso, idade, tempo; 
	
	printf("Digite o código do empregado: \t");
	scanf("%d", &codigo);
	printf("Digite o ano de nascimento: \t");
	scanf("%d", &nascimento);
	printf("Digite o ano de ingresso na empresa: \t");
	scanf("%d", &ingresso);
	system("cls"); 
	
	idade = 2025 - nascimento;
	tempo = 2025 - ingresso;
	
	printf("Empregado: %d \n", codigo);
	printf("Idade: %d \n", idade);
	printf("Tempo de trabalho: %d \n", tempo);
	
	if(idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)){
		printf("\nO empregado de código %d tem %d Anos de contribuição, %d Anos de idade e tem direito a aposentadoria \n", codigo, tempo, idade);
		printf("\nParabêns você já pode se aposentar \n\n");
	}
	
	else {
		printf("\nO empregado de código %d tem apenas %d Anos de contribuição porém não requer aposentadoria \n\n", codigo, tempo);
	}
	
	system("pause"); 
	return 0; 
} 
