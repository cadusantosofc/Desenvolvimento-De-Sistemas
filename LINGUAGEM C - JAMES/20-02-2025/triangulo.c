#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float a, b, c;
	
	printf("Qual valor do lado 1: \n");
	scanf ("%f", &a);
	
	printf("Qual valor do lado 2: \n");
	scanf ("%f", &b);
	
	printf("Qual valor do lado 3: \n");
	scanf ("%f", &c);
	
	
	if(a+b > c && a+c >b && b+c > a){
		if(a == b && a == c){
		printf("As medida formam um tringulo equilatero!\n\n");
	}
		else{
		if(a != b && a != c && b != c){
		printf("As medida formam um tringulo is�celes! \n");
		}
			else{
			printf("As medida formam um tri�ngulo is�celes! \n");
			}
		}
	}


	else{
		printf("Estas medidas n�o podem formar um tri�ngulo! \n");
		}

	system("pause");
	return 0;
}
