#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	char nome[50];
	
	printf("insira o teu nome completo:\n");
	fgets(nome,sizeof(nome),stdin);
	
	printf("O seu nome é: %s",nome);
}