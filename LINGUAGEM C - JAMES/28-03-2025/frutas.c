#include <stdio.h> 
#include <locale.h> 

/*Uma fruteira está vendendo frutas com a seguinte tabela de preços:
				Até 5 Kg 		Acima de 5 Kg
Morango 	R$ 2,50 por Kg 		R$ 2,20 por Kg
Maçã 		R$ 1,80 por Kg 		R$ 1,50 por Kg
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. 
Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

int main(void){ 
	setlocale(LC_ALL,"Portuguese"); 
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);	
	system("color F0");	
		 	
	float ma,mo, vma, vmo, pt, vt; 
	
	printf("Quantos kilos de morangos comprou: \t");
	scanf("%f", &mo);
	printf("Quantos kilos de maçãs comprou: \t");
	scanf("%f", &ma);

	system("cls"); 
	
	if(mo > 5){
		vmo =  mo * 2.20;
	}
	else{
		vmo =  mo * 2.50;
	}
	if(ma > 5){
		vma =  ma * 1.5;
	}
	else{
		vma =  ma * 1.8;
	}
	
	pt = mo + ma;
	vt = vmo + vma;

	if (pt > 8 || vt > 25){
		vt = vt * 0.9;
		
		printf("\n Você irá pagar por %.0f KG de frutas %.2f reais. \n", pt, vt);
	}
	
	else {
			printf("\n Você irá pagar por %.0f KG de frutas %.2f reais. \n", pt, vt);
}


	
	system("pause"); 
	return 0; 
} 
