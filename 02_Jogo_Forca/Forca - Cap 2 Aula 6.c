#include <stdio.h>
#include <string.h>

//cap 2 aula 6

int main() {
	char palavrasecreta[20];

	sprintf(palavrasecreta, "MELANCIA");

	//printf("%s", palavrasecreta);
	
	int acertou = 0;
	int enforcou = 1;

	do {
		char chute;
		scanf("%c", &chute);

		for(int i = 0; i < strlen(palavrasecreta); i++) {
			//printf("Estou vendo a letra %c na posição %d\n", palavrasecreta[i], i);
			if(palavrasecreta[i] == chute){
				printf("A posição %d tem essa letra!\n", i);
			}
		}

	} while (!acertou && !enforcou);


}


//Compilar codigo
//cd/
//d:
//cd "D:\Google Drive\Anonymous Pessoal\Curso Alura\Jogo_Forca"
//gcc Forca.c -o Forca.exe
//Forca.exe


//int notas [10];
//
//	notas[0] = 10;
//	notas[2] = 9;
//	notas[3] = 8;
//	notas[9] = 4;
//
//	printf("notas %d %d %d\n", notas[0] = 10, notas[2] = 9, notas[9] = 4);

	/*palavrasecreta[0] = 'M';
	palavrasecreta[0] = 'E';
	palavrasecreta[0] = 'L';
	palavrasecreta[0] = 'A';
	palavrasecreta[0] = 'N';
	palavrasecreta[0] = 'C';
	palavrasecreta[0] = 'I';
	palavrasecreta[0] = 'A';

	printf("%C", palavrasecreta[0])*/