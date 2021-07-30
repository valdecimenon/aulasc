// pilha.cpp
// LIFO = Last In First Out
// Último a entrar é o primeiro a sair

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

#define SAIR 0
#define MOSTRAR 1
#define INICIALIZAR 2
#define EMPILHAR 3
#define DESEMPILHAR 4

int pilha[TAMANHO];
int topo = 0;  // topo inicial

// prototipagem
void mostrar_pilha();
void inicializar_pilha();
void empilhar(int valor);
void desempilhar();
int menu();

int main(){
	system("chcp 1252");
	int escolha, numero;
	
	do {
	
		escolha = menu();
		
		switch (escolha){
			
			case MOSTRAR:
				mostrar_pilha();
				break;
				
			case INICIALIZAR:
				inicializar_pilha();
				break;
				
			case EMPILHAR:
				printf("\nValor a empilhar: ");
				scanf("%d", &numero);
				empilhar(numero);
				break;
				
			case DESEMPILHAR:
				desempilhar();
				break;
				
			case SAIR:
				printf("\nFui! Adeus!!");
				break;
		}
		
	} while (escolha != SAIR);
	
	return 0;
}

void mostrar_pilha(){
	printf("\n---- PILHA ----\n[");
	
	for (int i=0; i<TAMANHO; i++){
		printf("%d ", pilha[i]);
	}
	
	printf("]\nTOPO = %d\n", topo);
}

void inicializar_pilha(){
	for (int i=0; i<TAMANHO; i++){
		pilha[i] = -1;
	}
	topo = 0;
	printf("\nPilha inicializada\n");
}

void empilhar(int valor){
	if (topo < TAMANHO){
		pilha[topo] = valor;
		topo++;
		printf("\n%d foi empilhado\n", valor);
	} else {
		printf("\nPilha cheia!!!\n");
	}
}

void desempilhar(){
	
	if (topo > 0){
		topo--;
		int valor = pilha[topo];
		printf("\n%d foi desempilhado\n", valor);
		pilha[topo] = -1;
	} else {
		printf("\nPilha vazia!!!\n");
	}
}

int menu(){
	int opcao = -1;
	
	do {
		printf("\n\n===== PILHA ======");
		printf("\n%d = mostrar pilha", MOSTRAR);
		printf("\n%d = inicializar pilha", INICIALIZAR);
		printf("\n%d = empilhar", EMPILHAR);
		printf("\n%d = desempilhar", DESEMPILHAR);
		printf("\n%d = sair", SAIR);
		printf("\nQual opção? ");
		
		scanf("%d", &opcao);
		
	} while (opcao < SAIR || opcao > DESEMPILHAR);
	
	return opcao;
}
