// jogo_forca.cpp

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void imprime_palavra(char *letras, int tamanho);
bool existe_letra(char letra, char *palavra, int tamanho);

int main(){
	
	system("chcp 1252");
	system("color F0");
	
	bool perder = false;
	char palavra_secreta[] = "COMPUTADOR";
	int tamanho = strlen(palavra_secreta);
	char palavra[tamanho];
	int acertos = 0;
	char letra;
	int ind = 0;
	
	char partes_do_corpo[][15] = {
		"braço direito",
		"braço esquerdo",
		"perna direita",
		"perna esquerda",
		"tronco",
		"cabeça"		
	};	

	// inicializa palavra = [0 0 0 0 0 0]
	for (int i=0; i<tamanho; i++){
		palavra[i] = NULL;
	}
	
	do {
		
		printf("\nDigite uma letra: ");
		letra = toupper(getche());
		
		if (!existe_letra(letra, palavra, tamanho)){

			printf("\n\n");
			bool acertei = false;
			
			for (int i=0; i<tamanho; i++){
				// acertei
				if (letra == palavra_secreta[i]){
					acertos++;
					palavra[i] = letra;
					acertei = true;
				// errei	
				} else {
					
				}
			}
			
			if (!acertei){
				printf("\nVocê perdeu %s", partes_do_corpo[ind]);
				ind++;
			}
			
			imprime_palavra(palavra, tamanho);
			
		} else {
			printf("\n\nJá foi!!");
		}
		
	} while (ind < 6 && acertos < tamanho);
	
	if (ind >= 6){
		printf("\n\n==== Você perdeu o jogo! ===\n\n");
	} else {
		printf("\n\n==== Você GANHOU!!! ====\n\n");
	}
	
	
	return 0;
}

void imprime_palavra(char *letras, int size){
	printf("\n");
	for (int i=0; i<size; i++){
		if (letras[i] == 0)
			printf("__ ");
		else
			printf("%c ", letras[i]);
	}
}

bool existe_letra(char letra, char *palavra, int tamanho){
	for (int i=0; i<tamanho; i++){
		if (letra == palavra[i])
			return true;
	}
	
	return false;
}
