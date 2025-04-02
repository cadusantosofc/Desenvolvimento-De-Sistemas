#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float dolar, real, res;
	
	printf("Quanto vale um dolar: \n");
	scanf (" %f", &dolar);
	
	printf("Quanto reais você tem: \n");
	scanf (" %f", &real);
	
	res = real / dolar;
	
	printf("Você irá receber %.2f dolares. \n\n", res);

	system("pause");
	return 0;
}
