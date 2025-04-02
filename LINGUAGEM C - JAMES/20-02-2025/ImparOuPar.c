#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	int num, res, rest;
	
	printf("Digite um numero: \n");
	scanf (" %d", &num);
	
	res = num / 2;
	rest = num - res * 2;
	
	if(rest == 0){
		printf("O numero %d é par!\n\n",num);
	}
	
	else{
		printf("O numero %d é impar!\n\n",num);
	}


	system("pause");
	return 0;
}
