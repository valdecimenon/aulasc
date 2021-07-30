// aula03/vetor2.cpp

#include <stdio.h>
#include <stdlib.h>


int main(){
	system("chcp 1252");
	system("color 2");
	
	int tamanho;
	printf("\nTamanho do vetor: ");
	scanf("%d", &tamanho);
	
	// declaração do vetor sem inicialização
	int vetor[tamanho];
	
	// inicializa o vetor
	for (int i=0; i<tamanho; i++){
		printf("\nValor para posição %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	// mostra o vetor
	for (int i=0; i<tamanho; i++){
		printf("\nPosição %d = %d", i, vetor[i]);
	}
	
	// mostra vetor reverso
	printf("\nVetor reverso: [");
	for (int i= tamanho-1; i>=0; i--){
		printf("%d ", vetor[i]);
	}
	printf("]");


	return 0;
}
