/* Desenvolva um programa que permita o usuario digitar uma sequencia de numeros inteiros até que o valor informado seja ZERO.
Ao final da digitação deve ser exibido o maior valor digitado e a quantidade de numeros que foram informados. */ 

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int num,cont = 0,valorS = 0,maior = 0;
	system("color 02");
	setlocale(LC_ALL,"portuguese");
	
	printf("***** Programa maior ******");
	
	do{
		printf("\nValor: ");
		scanf("%d", &num);
		
		if(num!=0){
			cont++;
			
			if(cont == 1){
				maior = num;
			}else{
				if(num > maior){
					maior = num;
				}
			}
		}
	}while(num != 0);
	printf("o maior valor é: %d\n", maior);
	printf("Valores digitados é: %d", cont);
	
	system("\n\n");
	system("pause");
}
	
