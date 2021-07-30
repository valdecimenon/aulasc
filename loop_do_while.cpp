// loop_do_while

#include <stdio.h>
#include <stdlib.h>

// protótipo da função
int menu();

int main(){
	
	system("chcp 1252");
	int escolha;
	float custo = 0.0;
	
	do {
		escolha = menu();
		
		switch (escolha){		
		
			case 1:
				printf("\nEscolheu morango: R$ 2,50\n");
				custo += 2.50;
				break;
			
			case 2:
				printf("\nEscolheu chocolate: R$ 3,50\n");
				custo += 3.50;
				break;
			
			case 3:
				printf("\nEscolheu caramelo: R$ 4,50\n");
				custo += 4.50;
				break;
		
			default:
				printf("\nValor total a pagar: R$ %.2f\n", custo);
				break;
		}
		
	} while (escolha != 0);
	
	return 0;
}


int menu(){
	
	int opcao = -1;
	printf("\n=== MENU DE OPÇÕES ====");
	printf("\n1 = sabor morango");
	printf("\n2 = sabor chocolate");
	printf("\n3 = sabor caramelo");
	printf("\n0 = fechar pedido");
	
	do {
		printf("\nQual opção? ");
		scanf("%d", &opcao);
	} while (opcao < 0 || opcao > 3);
	
	return opcao;
}

