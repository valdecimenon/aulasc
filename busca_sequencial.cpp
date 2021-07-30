// aula03/busca_sequencial.cpp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	system("chcp 1252");
	system("color 2");
	
	// reservei um espaço de 100 caracateres para o vetor
	char frase[100];
	
	printf("\nDigite uma frase: ");
	gets(frase);
	
	// conta quantos caracteres 'A' existem na frase
	// fazendo busca sequencial
	int quantA = 0;
	for (int i=0; i <= strlen(frase) - 1; i++){
		char letra = toupper(frase[i]);
		if (letra == 'A') quantA++;
	}
	
	printf("\nEncontradas %d letras A", quantA);
	
	return 0;
	//  0 1 2 3 4 5
	// [a c j l o x z ] = 7 / 2 = 3
}
