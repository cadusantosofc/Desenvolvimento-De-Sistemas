#include <stdio.h> //biblioteca padr�o de entrada e saida sem ela n�o funciona scanf ou print
#include <locale.h> //biblioteca que permite usar outra lingua diferente do ingl�s
int main(void){ 
//main � a abertura do bloco principal equivalente ao in�cio 
//e void porque nao recebe dados para iniciar o bloco  
	setlocale(LC_ALL,"Portuguese"); 
	//configurando o portugu�s como l�ngua local
	//configurado para portugu�s usa-se a v�gula para separar a fra��o
	SetConsoleOutputCP (1252); //configura a sa�da para l�ngua portuguesa
	SetConsoleCP (1252);	//configura o teclado para l�ngua portuguesa
	system("color F0");		//system busca uma fun��o do SO color F0 muda as cores do monitor 
	char nome[20];	//cria a variavel reserva espa�o de 20 caracteres para a a variavel nome
	int mat;	//cria a variavel do tipo n�mero inteiro e reserva o espa�o na mem�ria 
	float nota; //cria a variavel do tipo n�mero real e reserva o espa�o na mem�ria
	
	printf("Digite o nome: \n"); 
	//printf exibe na tela o texto dentro das aspas "" \n passa para pr�xima linha
	scanf(" %[^\n]s", nome);
	// grava o texto digitado na vari�vel nome uma string longa => podemos utilizar para qualquer string
	printf("Digite o n�mero de matr�cula: \t");
		//printf exibe na tela o texto dentro das aspas "" \t passa para pr�xima tabula��o 
	scanf("%d", &mat);
	// grava o valor inteiro digitado na vari�vel mat (pode usar %d ou %i na leitura)
	printf("Digite a nota: \n");//igual a linha 16
	scanf("%f", &nota);
	system("cls"); // limpa a tela apagando os textos at� esta linha
		// grava o valor (n�mero real) digitado na vari�vel nota (sempre %f)
	printf("O aluno %s de matr�cula %d tem nota %.2f \n\n",nome, mat, nota);
	/*printf exibe o texto entre aspas na tela
	%s marca o ponto de exibir uma string
	%d marco o ponto de exibir um inteiro
	%.2f marca o ponto de exibir um n�mero real, valor depois do ponto define a quantidade de casas decimais
	todas as vari�veis devem ser colocadas depois do " (fecha aspas) separadas por virgula na ordem 
	*/
	system("pause"); //para a tela ate que o usu�rio aperte 'qualquer tecla para continuar'
	return 0; // define o retorno como valor zero => n�o deixa nada gravado
} //encerra o bloco principal marca o fim do programa
