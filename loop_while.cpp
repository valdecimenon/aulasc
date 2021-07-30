// loop_while.cpp

#include <stdio.h>
#include <stdlib.h>


int main(){
	
	system("chcp 1252");

	bool acertar = false;
	int numero = 99, chances = 5;
	int chute, tentativas = 0;

	while (!acertar) {
		printf("\nAcerte o n�mero: ");
		scanf("%d", &chute);
		tentativas++;
		
		if (chute == numero){  // SE
			printf("\nVoc� acertou!");
			acertar = true;
		}
		else {                 // SEN�O
			printf("\nVoc� errou!");
			printf("\nRestam %d chances", chances - tentativas);
		}
		
		if (tentativas >= chances){
			break;
		}
	}
	
	return 0;
}
