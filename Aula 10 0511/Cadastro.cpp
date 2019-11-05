/* faça um programa que permita o cadastro de 5 clientes( nome e idade) e ao termino exiba toda a base de dados cadastrada */

#include<stdio.h>
#include<stdlib.h>

int main(){
	char nomes [5] [20];
	int i, idades[5];
	for(i = 0; i<5; i++){
		printf("**Programa Cadastro**\n\n");
		printf("-- Cliente #%d --\n\n", i+1);
		printf("Nome: ");
		scanf("%s", &nomes[i]);
		printf("idade: ");
		scanf("%d", &idades[i]);
		
		system("cls");
	}
	printf("Exibindo base de dados...\n\n");
	printf("NOME\tº\tIDADE\n");
	printf("--------------------\n\n");
	
	for(i=0; i<5;i++){
		printf("%s\tº\t%d\n", nomes[i],idades[i]);
		_sleep(350);
	}
	
	printf("\n\n");
	system("pause");
}
