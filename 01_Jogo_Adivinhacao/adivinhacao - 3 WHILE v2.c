//PErmite pegar o que foi digitado no teclado
#include <stdio.h>
#include <stdlib.h>
//Importa locais
#include <locale.h>
//numero de tentativas deve ser uma constante
//#define NUMERO_DE_TENTATIVAS 5

//video 17
int main() {

	//habilita a acentuação para o português
	//setlocale(LC_ALL, "Portuguese");
	setlocale(LC_ALL, "UTF-8");

	//imprime cabecalho do nosso jogo
	printf("***********************************\n");
	printf("* Bem vindo ao jogo de advinhação *\n");
	printf("***********************************\n");

	int numerosecreto = 42;
	//printf("o numero secreto é %d o numerosecreto. não conta pra ninguem\n", numerosecreto );

	int chute;
	int ganhou = 0;
	int tentativas =1;

//	loop for
//	for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){

//	loop infinito, com break para estopar
	while (1) {

		printf("\n");
		//printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Tentativa %d\n", tentativas);
		printf ("Qual é seu chute? ");
		scanf("%d", &chute);
		printf("\n");
		printf("Seu chute foi %d\n", chute);

		if (chute < 0){
			printf("Voce não pode chutar numero negativo!\n");
			//i--;
			//Para a execução do bloco de codigo, mas continua no FOR
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if (acertou){

			printf("Parabens! Voce acertou!\n");
			printf("Jogue de novo, voce e um bom jogador!\n");
			
			//FOR, PARA de executar
			break;

		}

		else if (maior){
			printf("seu chute foi maior que o nomero secreto\n");
		}

		else {
			printf("seu chute foi menor que o nomero secreto\n");
		}

		tentativas++;

		printf("Mas nao desanime tente de novo!\n");
		//system("pause");
		//system("cls");
		}

		printf("\n");
		printf("Fim de Jogo!\n");
		printf("Voce acertou em %d tentativas\n", tentativas);
		system("pause >nul");

		return 0;
};
//Compilar codigo
//cd/
//d:
//cd "D:\Google Drive\Anonymous Pessoal\Curso Alura"
//gcc adivinhacao.c -o adivinhacao.exe