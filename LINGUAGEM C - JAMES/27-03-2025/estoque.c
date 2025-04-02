#include <stdio.h> 
#include <locale.h> 
int main(void){ 
	setlocale(LC_ALL,"Portuguese"); 
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);	
	system("color F0");		 	
	float atual, max, min, me; 
	
	printf("Digite a quantidade atual em estoque: \n");
	scanf("%f", &atual);
	printf("Digite a quantidade máxima em estoque: \n");
	scanf("%f", &max);
	printf("Digite a quantidade minima em estoque: \n");
	scanf("%f", &min);
	system("cls"); 
	
	me = (max + min) / 2;
	
	if(atual >= me){
		printf("Não efetuar compra \n\n");
	}
	
	else {
		printf("Efetuar compra \n\n");
	}
	
	system("pause"); 
	return 0; 
} 
