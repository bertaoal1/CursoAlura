//PErmite pegar o que foi digitado no teclado
#include <stdio.h>
#include <stdlib.h>
//Importa locais
#include <locale.h>
#include <time.h>

//video 26
int main() {

	//habilita a acentuação para o português
	//setlocale(LC_ALL, "Portuguese");
	setlocale(LC_ALL, "UTF-8");

	//imprime cabecalho do nosso jogo
	printf("***********************************\n");
	printf("* Bem vindo ao jogo de advinhação *\n");
	printf("***********************************\n");

	//Numero de segundos atual des de 1.1.70
	int segundos = time(0);
	//semente para o numero randomuco do codigo EPOCH  1 1 70
	srand(segundos);

	int numerogrande = rand();
	
	int numerosecreto = numerogrande % 100;

	//int numerosecreto = 42;
	int chute;
	//printf("chute %d\n", chute);
	int ganhou = 0;
	int tentativas =1;
	double pontos = 1000;

//	loop infinito, com break para stop
	while (1) {

		printf("\n");
		printf("Tentativa %d\n", tentativas);
		printf ("Qual é seu chute? Entre 0 e 100: ");
		scanf("%d", &chute);
		printf("\n");
		printf("Seu chute foi %d\n", chute);

		if (chute < 0){
			printf("Voce não pode chutar numero negativo!\n");
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

		//Função "abs" numero absoluto sempre positivo #include <stdlib.h>
		double pontosperdidos = abs(chute - numerosecreto) / (double)2;

		pontos = pontos - pontosperdidos;

		printf("Mas nao desanime tente de novo!\n");
		}

		printf("\n");
		printf("Fim de Jogo!\n");
		printf("Voce acertou em %d tentativas\n", tentativas);
		printf("Total de pontos: %.1f\n", pontos);
		system("pause >nul");

		return 0;
};
//Compilar codigo
//cd/
//d:
//cd "D:\Google Drive\Anonymous Pessoal\Curso Alura"
//gcc adivinhacao.c -o adivinhacao.exe

	//Tipos de dados 
	//shot 2 bites INTEIRO
	//int 4 bytes INTEIRO
	//long 8 bytes INTEIRO
	//double pi = 3.1415; 8 bites casas decimais
	//float 4 bits Casas decimais menores
