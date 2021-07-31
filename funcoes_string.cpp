// funcoes_string.cpp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Funções para manipular strings
	
	1.  strcpy(s1, s2)
	    Copia a string s2 dentro da string s1
	    
	2. strlen(s1)
		Retorna o comprimento da string s1
		
	3. strcat(s1, s2)
		Concatena a string s2 no final da s1
		
	4. strchr(s1, ch)
		Retorna um ponteiro para a primeira ocorrência
		do caratere ch na string s1
		
	5. strstr(s1, s2)
		Retorna um ponteiro para a primeira ocorrencia
		da string s2 na string s1
		
	6. strcmp(s1, s2)
	compara s1 com s2, retornado
	- 0 se s1 e s2 são iguais
	- menor que 0 se s1 < s2
	- maior que 0 se s1 > s2
*/

int main(){
	
	char str1[] = "Bom ";
	char str2[] = "Dia!";
	char str3[10];
	int length;
	
	// copia str1 dentro de str3
	strcpy(str3, str1);
	printf("\nstrcpy = %s", str3);
	
	// copia str2 dentro de str3, sobrepondo str1
	strcpy(str3, str2);
	printf("\nstrcpy = %s", str3);
	
	// obtém o comprimento de str3
	length = strlen(str3);
	printf("\nstrlen = %d", length);
	
	// copia str1 dentro de str3
	strcpy(str3, str1);  // str3 = "Bom       "
	// e agora concatena str3 com str2
	strcat(str3, str2);
	printf("\nstrcat = %s", str3);
	
	// outro exemplo
	char s1[30] = "o rato roeu a roupa ";
	char s2[] = "do rei de roma.";
	strcat(s1, s2);
	printf("\nstrcat = %s", s1);
	
	// procura pela primeira ocorrência do caractere 
	// 'r' em s1
	char *s3 = strchr(s1, 'r');
	printf("\nstrchr = %s", s3);
	
	// procura pela primeira ocorrência da palavra
	// rei em s1, retornando um ponteiro
	char *s4 = strstr(s1, "rei");
	printf("\nstrstr = %s", s4);
	
	char fruta1[] = "banana";
	char fruta2[] = "amora";
	
	if (strcmp(fruta1, fruta2) == 0)
		printf("\niguais");
	else
		printf("\ndiferentes");
	
	return 0;
}
