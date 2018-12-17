#include <stdio.h>
#include <stdlib.h>
//aula 3

int main(){
	//matriz de 5 x 10
	char mapa[5][10+1];

	FILE* f;
	f = fopen("mapa.txt", "r");
	if (f == 0) {
		printf("Erro na leitura do mapa\n");
		exit(1);
	}

	for(int i = 0; i < 5; i++) {
		fscanf(f, "%s", mapa[i]);
	}

	for(int i = 0; i < 5; i++) {
		printf("%s\n", mapa[i]);
	}

	fclose(f);

	return 0;
}

//d:
//cd D:\Google Drive\Anonymous Pessoal\Curso Alura\03_Foge_foge
//gcc FogeFoge.c -o fogefoge.exe

//	mapa [0][0] = '|';
//	mapa [4][9] = '@';
//
//	printf("%c %c", mapa[0][0], mapa[4][9]);