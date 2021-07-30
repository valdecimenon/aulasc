// randomico.cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// protótipo da função
int gerador(int maximo);

int main(){
	
	// inicializador da função rand()
	srand(time(NULL)); // static rand	
	char senha[7];
	
	// senha = ['a', 'b', 'c', 'd', 'e', 'f', '\0'];
	for (int i=0; i<6; i++){
		int num = gerador(26);
		char letra = 'a' + num;
		senha[i] = letra;
	}
	// marca o final do vetor
	senha[6] = NULL;
	printf("\nSenha: %s", senha);
	
	return 0;
}


int gerador(int maximo){
	
	// gera número entre 0 e 59
	int numero = rand() % maximo;
		
	return numero;
}
