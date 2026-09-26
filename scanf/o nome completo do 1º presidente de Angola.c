#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char p[24];
	printf("Insira o nome completo do 1º presidente de Angola:\n");
	scanf("%23[^\n]s",p);
	printf("Segundo você, o primeiro presidente de Angola chamava-se %s \n", p);
}