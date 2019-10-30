/* Desenvolva um programa que o usuario informe a medida do lado de um triangulo retangulo cujo os catetos possuem medidas
iguais, e o programa desenhe o triangulo na tela*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int lado, i, j;
	
	printf("informe a medida do lado:");
	scanf("%d", &lado);
	
	system("cls");
	
	for(i = 1; i <= lado; i++){
		for (j = 1; j <= i; j++){
			printf("# ");
		}
		printf("\n");
	}	
	printf("\n\n");
	system("pause");
}
