#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float eleitores, brancos, nulos, validos, semvoto, porcem, bran, nul, val;
	
	
	printf("Quantos eleitores tem na cidade: \t");
	scanf ("%f", &eleitores);
	
	printf("Quantos votos são validos: \t");
	scanf ("%f", &validos);
	
	printf("Quantos votos nulos: \t");
	scanf ("%f", &nulos);
	
	printf("Quantos votos em brancos: \t");
	scanf ("%f", &brancos);
	
	semvoto = eleitores - ( brancos + nulos + validos);
	porcem = (semvoto / eleitores) * 100;
	bran = (validos / eleitores) * 100;
	nul = (brancos / eleitores) * 100;
	val = (nulos / eleitores) * 100;

	if(brancos + nulos + validos > eleitores){
		printf("\nFraude detectada \n");
	}
	
	if(brancos + nulos + validos <= eleitores){
		
		printf("\nEleitores ausentes %.0f representando %.2f %% dos eleitores \n", semvoto, porcem);
		printf("Votos validos %.0f representando %.2f %% dos eleitores \n", validos, bran);
		printf("Votos nulos %.0f representando %.2f %% dos eleitores \n", nulos, val);
		printf("Votos em branco %.0f representando %.2f %% dos eleitores \n\n", brancos, nul);
	}
	
	
	system("pause");
	return 0;
}
