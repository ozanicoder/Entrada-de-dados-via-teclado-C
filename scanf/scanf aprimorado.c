#include <stdio.h>

int main (){

	char s[10];

	printf("digite algo (scanf convecional):\n");
	scanf("%s", s);
	fflush(stdin);

	printf("resultado;%s\n\n\n", s);

	printf("digite algo (scanf melhorado):\n");
	scanf("%10[^\n]s", s);
	fflush(stdin);

	printf("resultado;%s\n\n\n", s);

	printf("digite algo (leitura pelo fgets):\n");
	fgets(s,10,stdin);
	fflush(stdin);

	printf("resultado;%s\n\n\n", s);

}
