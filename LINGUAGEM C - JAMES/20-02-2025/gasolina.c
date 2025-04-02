#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float tanque, consu, dist, consumo, res;
	
	printf("Quantos litros tem no tanque do carro: \n");
	scanf ("%f", &tanque);
	
	printf("Quantos KM faz com 1 litro: \n");
	scanf ("%f", &consu);
	
	printf("Qual a distancia que ira percorrer em KM: \n");
	scanf ("%f", &dist);
	
	consumo = dist / consu;
	
	if(res <= tanque){
		res = tanque - consumo;
		printf("O carro vai ficar com %.2f litros no tanque !\n\n",res);
	}
	
	else{
		res = consumo - tanque;
		printf("Você precisa abastecer %.2f litros no tanque!\n\n",res);
	}


	system("pause");
	return 0;
}
