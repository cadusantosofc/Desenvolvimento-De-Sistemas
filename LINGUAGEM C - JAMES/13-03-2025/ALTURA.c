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
/*
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
*/

	if(al > 2.20){
		printf("\n Gigante \n");
	}
	if(al <= 2.20 && al > 2){
		printf("\n Muito Alto \n");
	}
	if(al <= 2 && al > 1.8){
		printf("\n Alto \n");
	}
	if(al <= 1.8 && al > 1.65){
		printf("\n Altura Média \n");
	}
	if(al <= 1.65 && al > 1.5){
		printf("\n Baixo \n");
	}
	if(al <= 1.5 && al > 1.2){
		printf("\n Muito Baixo \n");
	}
	if(al < 1.2){
		printf("\n Anão \n");
	}
	
	system("pause");
	return 0;
}
