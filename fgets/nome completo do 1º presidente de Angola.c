#include<stdio.h>
#include<locale.h>
#define a 24
int main(){
	setlocale(LC_ALL,"Portuguese");
	char p[a];

	printf("Insira o nome completo do 1º presidente de Angola:\n");
	fgets(p, a, stdin);

	printf("Segundo você, o primeiro presidente de Angola chamava-se %s \n", p);

}
