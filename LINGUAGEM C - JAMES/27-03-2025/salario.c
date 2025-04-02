#include <stdio.h> 
#include <locale.h> 
int main(void){ 
	setlocale(LC_ALL,"Portuguese"); 
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);	
	system("color F0");		 	
	float sf, tv, st, cv; 
	
	printf("Qual seu sálario fixo: \t");
	scanf("%f", &sf);
	printf("Qual o total de vendas efetuadas: \n");
	scanf("%f", &tv);
	system("cls"); 
	
	
	if(tv > 1500){
		st = sf +(1500 * 0.03) + ((tv - 1500)*0.05);
		printf("Seu sálario total será de %.2f. \n\n",st);
	}
	
	else {
		st = sf + (tv + 0.03);
		printf("Seu sálario total será de %.2f. \n\n",st);
	}
	
	system("pause"); 
	return 0; 
} 
