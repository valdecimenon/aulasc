// aula03/vetor.cpp

#include <stdio.h>
#include <stdlib.h>


int main(){
	system("chcp 1252");
	system("color 2");
	
	// posi��o     0    1   2
	// �ltima posi��o = tamanho do vetor - 1
	// vetor com inicializador
	int vetor[] = {10, 20, 30};

	for (int i=0; i <= 2; i++){
		printf("\n%d", vetor[i]);
	}

	return 0;
}
