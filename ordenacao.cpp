// ordenacao.cpp

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//      j= 0  1  2  3  4  5  6  7  8  9
int a[] = {8, 7, 6, 5, 4, 3, 2, 1, 0, 9};
int quant = 10;

void imprime_vetor();

int main(){
	system("chcp 1252");
	
	printf("\nVetor sem ordenação: ");
	imprime_vetor();
	
	// ordena os números do vetor a usando 
	// o algoritmo bubble sort
	for (int i=0; i<quant; i++){

		for (int j=0; j<quant-1; j++){
			// troca as posições
			if (a[j] > a[j+1]){
				int aux = a[j]; // variável auxiliar
				a[j] = a[j+1];
				a[j+1] = aux;
				Sleep(100);
			}
		}
		
		imprime_vetor();
	}
	
	
	return 0;
}

void imprime_vetor(){
		printf("\n[");
		for (int i=0; i<quant; i++){
			printf("%d ", a[i]);
		}
		printf("]");
}
