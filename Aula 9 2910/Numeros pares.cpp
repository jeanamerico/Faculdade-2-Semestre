/* faça um programa onde o usuario digite um valor inicial e um valor final e sejam exibidos todos os numeros
pares existentes entre eles*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int l, i, f,aux;
	
	printf("***Numeros pares***\n\n");
	printf("Informe o valor inicial\n\n");
	scanf("%d",&i);
	printf("Infome o valor final\n\n");
	scanf("%d",&f);
	if(i>f){
		aux = i;
		i = f;
		f = aux;
	}
	for (l = i; l <= f; l++){
		if(l%2==0){
		printf("%d ", l);
		}
	}
	printf("\n\n");
	system("pause");
}
