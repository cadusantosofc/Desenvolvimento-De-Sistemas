#include <stdio.h> //biblioteca padrão de entrada e saida sem ela não funciona scanf ou print
#include <locale.h> //biblioteca que permite usar outra lingua diferente do inglês
int main(void){ 
//main é a abertura do bloco principal equivalente ao início 
//e void porque nao recebe dados para iniciar o bloco  
	setlocale(LC_ALL,"Portuguese"); 
	//configurando o português como língua local
	//configurado para português usa-se a vígula para separar a fração
	SetConsoleOutputCP (1252); //configura a saída para língua portuguesa
	SetConsoleCP (1252);	//configura o teclado para língua portuguesa
	system("color F0");		//system busca uma função do SO color F0 muda as cores do monitor 
	char nome[20];	//cria a variavel reserva espaço de 20 caracteres para a a variavel nome
	int mat;	//cria a variavel do tipo número inteiro e reserva o espaço na memória 
	float nota; //cria a variavel do tipo número real e reserva o espaço na memória
	
	printf("Digite o nome: \n"); 
	//printf exibe na tela o texto dentro das aspas "" \n passa para próxima linha
	scanf(" %[^\n]s", nome);
	// grava o texto digitado na variável nome uma string longa => podemos utilizar para qualquer string
	printf("Digite o número de matrícula: \t");
		//printf exibe na tela o texto dentro das aspas "" \t passa para próxima tabulação 
	scanf("%d", &mat);
	// grava o valor inteiro digitado na variável mat (pode usar %d ou %i na leitura)
	printf("Digite a nota: \n");//igual a linha 16
	scanf("%f", &nota);
	system("cls"); // limpa a tela apagando os textos até esta linha
		// grava o valor (número real) digitado na variável nota (sempre %f)
	printf("O aluno %s de matrícula %d tem nota %.2f \n\n",nome, mat, nota);
	/*printf exibe o texto entre aspas na tela
	%s marca o ponto de exibir uma string
	%d marco o ponto de exibir um inteiro
	%.2f marca o ponto de exibir um número real, valor depois do ponto define a quantidade de casas decimais
	todas as variáveis devem ser colocadas depois do " (fecha aspas) separadas por virgula na ordem 
	*/
	system("pause"); //para a tela ate que o usuário aperte 'qualquer tecla para continuar'
	return 0; // define o retorno como valor zero => não deixa nada gravado
} //encerra o bloco principal marca o fim do programa
