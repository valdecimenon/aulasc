// aula03/vetor3.cpp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	system("chcp 1252");
	system("color 2");
	

	
	char frase[] = "o rato roeu a roupa do rei de roma\0";
	// imprime a frase reversa
	for (int i=strlen(frase)-1; i>=0; i--){
			printf("%c", frase[i] - 32);
	}

	return 0;
}
