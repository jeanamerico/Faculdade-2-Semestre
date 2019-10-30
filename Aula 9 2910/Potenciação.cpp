/*Desenvolva um programa que exiba em tela a sequencia da base exponencial a partir do número digitado pelo usuario*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int b, i, r;
	
	printf("***Programa de potencia***\n\n");
	printf("Informe um valor\n\n");
	scanf("%d",&b);
	for(i=10;i>=0;i--){
		r = pow(b,i);
		printf("%d ",r);
	}
}
