/* Desenvolva um programa onde o usuario digite um valor, e o programa exiba a tabuada do numero digitado*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i, p;
	printf("***Programa tabuada***\n");
	printf("Informe um valor\n");
	scanf("%d", &n);
	
	for(i=0; i<=10;i++){
		p = n * i;
		printf("%d  X  %d = %d\n",n,i,p);
	}	
	printf("\n\n");
	system("pause");
}
