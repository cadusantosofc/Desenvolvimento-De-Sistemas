#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	SetConsoleOutputCP (1252);
	SetConsoleCP (1252);
	system("color F0");
	
	float al;
	
	
	printf("Digite a altura para ver a classificação: \t");
	scanf ("%f", &al);
	
		if (al > 2.20){
			printf("\n Gigante \n");
		}else{
			if ( al > 2){
				printf("\n Muito Alto \n");
				}else{
					if (al > 1.8){
					printf("\n Alto \n");
					}else{
						if ( al > 1.65){
						printf("\n Altura média \n");
						}else{
							if (al > 1.5){
							printf("\n Baixo \n");
							}else{
								if ( al > 1.20){
								printf("\n Muito Baixo \n");
								}else{
								printf("\n Anão \n");
								}
							}
						}					
					}
				}
			}

	system("pause");
	return 0;
}
