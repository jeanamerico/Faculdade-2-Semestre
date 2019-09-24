/* desenvolver um programa que os valores inteiros A e B deve trocar os valores entre si*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, b, aux;
	
	printf ("Troca troca \n\n\n");
	printf ("Entre com o valor A:");
	scanf("%d",&a);
		
	printf ("Entre com o valor b:");
	scanf("%d",&b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("\n\n Valor final de A: %d", a);
	printf("\n\n Valor final de B: %d", b);
	
	system("\n\n");
	system("pause");
}
