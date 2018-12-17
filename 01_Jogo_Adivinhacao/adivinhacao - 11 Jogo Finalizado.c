//PErmite pegar o que foi digitado no teclado
#include <stdio.h>
#include <stdlib.h>
//Importa locais
#include <locale.h>
#include <time.h>

//video 30
int main() {

	//habilita a acentuação para o português
	setlocale(LC_ALL, "Portuguese");

	system("MODE CON COLS=100 LINES=30");
	system("color 0a");

	//imprime cabecalho do nosso jogo
	printf("	   /          \\                                             (\n");
	printf("      /____________\\                                           (\\)\n");
	printf("       |:_:_:_:_:_|                                             ))\n");
	printf("       |_:_,--.:_:|                                          (\\//   )\n");
	printf("       |:_:|__|_:_|                         _               ) ))   ((\n");
	printf("    _  |_   _  :_:|   _   _   _            (_)             ((((   /)\\`\n");
	printf("   | |_| |_| |   _|  | |_| |_| |             o              \\\\)) (( (\n");
	printf("    \\_:_:_:_:/|_|_|_|\\:_:_:_:_/             .                ((   ))))\n");
	printf("     |_,-._:_:_:_:_:_:_:_.-,_|                                )) ((//\n");
	printf("     |:|_|:_:_:,---,:_:_:|_|:|                               ,-.  )/\n");
	printf("     |_:_:_:_,'     `,_:_:_:_|           _  o               ,;'))((\n");
	printf("     |:_:_:_/  _ | _  \\_:_:_:|          (_O                   ((  ))\n");
	printf("_____|_:_:_|  (o)-(o)  |_:_:_|--'`-.     ,--.                (((\\'/\n");
	printf(" ', ;|:_:_:| -( .-. )- |:_:_:| ', ; `--._\\  /,---.~           \\`))\n");
	printf(".  ` |_:_:_|   \\`-'/   |_:_:_|.  ` .  `  /()\\.__( ) .,-----'`-\\((\n");
	printf(" ', ;|:_:_:|    `-'    |:_:_:| ', ; ', ; `--'|   \\ ', ; ', ; ',')).,--\n");
	printf(".  ` MJP ` .  ` .  ` .  ` .  ` .  ` .  ` .    .  ` .  ` .  ` .  ` .  `\n");
	printf(" ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ;\n");
	printf("\n");
	printf("                 Bem vindo ao jogo de Advinhação!\n");


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
			printf("\n");
			printf("         ^\n");
			printf("       //                        ___   ___\n");
			printf("     (*)      0                 /  _   _  \\\n");
			printf("    (*)                           / \\ / \\\n");
			printf("   (*)     0                     |   |   |    |\\\n");
			printf("  //                             |0  |0  |___/  \\     ++\n");
			printf(" //                               \\_/ \\_/    \\   | ++\n");
			printf("//                              _/      __    \\  \\\n");
			printf("/     /|   /\\                  (________/ __   |_/\n");
			printf("     / |  |  |                   (___      /   |    |\\\n");
			printf("    / /  /   |                     \\     \\|    |___/  |\n");
			printf("   |  | |   /                       \\_________      _/   ++++\n");
			printf("  /   | |  |                      ++           \\    |\n");
			printf(" |   / /   |                              ++   |   /  +++\n");
			printf("/   /  |   |                               ++ /__/\n");
			printf("~~~ ~~~~   ~~~~~~~~~~~~  ~~~~~~~~~~~~~  ~~~~        ~~+++~~~~ ~\n");
			printf("\n");
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

		printf("\n");
		printf("                           .\n");
		printf("                          A       ;\n");
		printf("                |   ,--,-/ \\---,-/|  ,\n");
		printf("               _|\\,'. /|      /|   `/|-.\n");
		printf("           \\`.'    /|      ,            `;.\n");
		printf("          ,'\\   A     A         A   A _ /| `.;\n");
		printf("        ,/  _              A       _  / _   /|  ;\n");
		printf("       /\\  / \\   ,  ,           A  /    /     `/|\n");
		printf("      /_| | _ \\         ,     ,             ,/  \\\n");
		printf("     // | |/ `.\\  ,-      ,       ,   ,/ ,/      \\/\n");
		printf("     / @| |@  / /'   \\  \\      ,              >  /|    ,--.\n");
		printf("    |\\_/   \\_/ /      |  |           ,  ,/        \\  ./' __:..\n");
		printf("    |  __ __  |       |  | .--.  ,         >  >   |-'   /     `\n");
		printf("  ,/| /  '  \\ |       |  |     \\      ,           |    /\n");
		printf(" /  |<--.__,->|       |  | .    `.        >  >    /   (\n");
		printf("/_,' \\\\  ^  /  \\     /  /   `.    >--            /^\\   |\n");
		printf("      \\\\___/    \\   /  /      \\__'     \\   \\   \\/   \\  |\n");
		printf("       `.   |/          ,  ,                  /`\\    \\  )\n");
		printf("         \\  '  |/    ,       V    \\          /        `-\\\n");
		printf("          `|/  '  V      V           \\    \\.'            \\_\n");
		printf("           '`-.       V       V        \\./'\\\n");
		printf("               `|/-.      \\ /   \\ /,---`\\         kat\n");
		printf("                /   `._____V_____V'\n");
		printf("\n");
		printf("Mas nao desanime tente de novo!\n");
		}

		printf("\n");
		printf("Fim de Jogo!\n");
		printf("Voce acertou em %d tentativas\n", tentativas);
		printf("Total de pontos: %.1f\n", pontos);
		system("pause >nul");

		printf("                                   ::::::::::::::                                    \n");
		printf("                               :::::::::::::::::::::::                               \n");
		printf("                           :::::::::::::::::::::::::::::::                           \n");
		printf("                         :::::::::::::::::::::::::::::::::::                         \n");
		printf("              ::        :::::::::::::::::::::::::::::::::::::        ::              \n");
		printf("            ::::::::    :::::::::::::::::::::::::::::::::::::    ::::::::            \n");
		printf("          ::::::::::::  :::::::::::::::::::::::::::::::: ::::  ::::::::::::          \n");
		printf("          ::::::::::::: ::::::::::::::::::::::::::::::::::::: :::::::::::::          \n");
		printf("           :::::::::::: :: ::::::::::::::::::::::::::::::: :: ::::::::::::           \n");
		printf("                       : :::           :::::::          :::: :                       \n");
		printf("                          ::            :::::            ::                          \n");
		printf("                        ::::          ::: : :::         :::::                        \n");
		printf("                         ::::::::::::::   :   ::::::::::::::                         \n");
		printf("                           ::::::::::::   :   ::::::::::::                           \n");
		printf("                             ::: ::::::::::::::::::: :::                             \n");
		printf("                     :::::::::::  :: :::::::::::  :  ::: ::::::                      \n");
		printf("           :::::::::::::::::   ::: ::::: : : ::::: :::  ::::::::::::::::::           \n");
		printf("           :::::::::::::::      ::::: : ::::: : :::::      :::::::::::::::           \n");
		printf("             :::::::::            :::::::::::::::::            :::::::::             \n");
		printf("             :::::::                 :::::::::::                 :::::::             \n");
		//system("pause >nul");
		printf("\n");
		printf("Saindo em: \n");
		printf("\n");
		system("PING -n 2 127.0.0.1 >nul");
		printf("    3...\n");
		system("PING -n 2 127.0.0.1 >nul");
		printf("    2..\n");
		system("PING -n 2 127.0.0.1 >nul");
		printf("    1.\n");
		system("PING -n 2 127.0.0.1 >nul");
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
