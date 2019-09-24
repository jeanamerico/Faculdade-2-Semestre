/* desenvolva uma programa, onde o usuario informe um valor inicial e sejam exibido os 20 numeros pares a partir do valor digitado. 
Ao termino deve ser somados todos os valores exibidos em tela, e mostrado o resultado da soma**/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int valorE,cont = 0,valorS = 0;
	system("color 02");
	setlocale(LC_ALL,"portuguese");
	
	printf("informe o valor inicial:\n");
	scanf("%d", &valorE);
	
	if(valorE % 2 != 0){
		valorE++;
	}
	while(cont <20){
		printf("%d - ", valorE);
		cont ++;
		valorS += valorE;
		valorE+=2;
	}
	printf("\nO valor total é de :%d", valorS);
}
