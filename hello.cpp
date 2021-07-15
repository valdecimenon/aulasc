// hello.cpp
#include "stdio.h"
#include "stdlib.h"
#include <windows.h>

// constante
#define tempo 5

// função linha
void linha(char car, int numcol){
	printf("+");
	
	for (int i=0; i<numcol; i++){
		printf("%c", car);
		Sleep(tempo);
	}
	
	printf("+\n");	
}

void espacos(int numcol){
	printf("|");
	// inicialização da variável; condição de execução; incremento
	for(int i=0; i<numcol; i++){
		printf(" ");
		Sleep(tempo);
	}
	printf("|\n");
}

void colunas(int altura, int numcol){
	for (int i=0; i<altura; i++){
		espacos(numcol);
	}	
}

int main(){
	
	system("color F0");
	system("chcp 1252");
	
	int numlinhas, numcolunas;
	printf("\nDigite o número de linhas: ");
	scanf("%d", &numlinhas);
	
	printf("\nDigite o número de colunas: ");
	scanf("%d", &numcolunas);
	
	linha('=', numcolunas);
	colunas(numlinhas, numcolunas);
	linha('=', numcolunas);


	
	return 0;
}
