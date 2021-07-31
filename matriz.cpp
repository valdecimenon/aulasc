#include <stdio.h>
#include <stdlib.h>

int main()
{

	// matriz com 3 linhas X 3 colunas
	// declara��o da matriz
	int matriz[3][3];
	// i = linha da martriz
	// j = coluna da matriz
	int i, j, valor;
	valor = 0;

	for (int i = 0; i < 3; i++)
	{	// linha
		// executa 3X
		for (int j = 0; j < 3; j++)
		{ // coluna
			valor += 10;
			matriz[i][j] = valor;
		}
	}

	// linha 0
	printf("\n\nLINHA 0");
	printf("\nMatriz[0][0] = %d", matriz[0][0]);
	printf("\nMatriz[0][1] = %d", matriz[0][1]);
	printf("\nMatriz[0][2] = %d", matriz[0][2]);

	// linha 1
	printf("\n\nLINHA 1");
	printf("\nMatriz[1][0] = %d", matriz[1][0]);
	printf("\nMatriz[1][1] = %d", matriz[1][1]);
	printf("\nMatriz[1][2] = %d", matriz[1][2]);

	// linha 2
	printf("\n\nLINHA 2");
	printf("\nMatriz[2][0] = %d", matriz[2][0]);
	printf("\nMatriz[2][1] = %d", matriz[2][1]);
	printf("\nMatriz[2][2] = %d", matriz[2][2]);

	printf("\n\n");
	for (int i = 0; i < 3; i++)
	{
		printf("\n[");
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("]");
	}

	return 0;
}
