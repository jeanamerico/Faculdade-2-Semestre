#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	int num, i;
	int a = 0, b = 1, prox, resp;
	printf("**Programa de Fibonacci**\n\n");
	
	printf("Entre com o valor:\n");
	scanf("%d", &num);
	
	if(num == 1){
		resp = a;
	}else if(num == 2){
		resp =b;
	}else{
		printf("%d  %d  ", a, b);
		for(i=3; i<=num; i++){
			prox = a + b;
			a = b;
			b = prox;
			
			printf("%d  ", prox);
		}
		resp = prox;
	}
	printf("\n \nElemento: %d", resp);
	
	printf("\n\n");
	system("pause");
}
