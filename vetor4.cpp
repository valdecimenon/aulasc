// aula03/vetor3.cpp

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
	
	// inverte a frase e converte para maiusculas
	for (int i=strlen(frase)-1; i>=0; i--){
		printf("%c", toupper(frase[i]));
	}
	
	
	return 0;
}
