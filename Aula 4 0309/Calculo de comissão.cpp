/*um funcionario que trabalha com vendas foi premiado com um aumento em seu salario,baseado em uma comiss�o que varia de acordo com o valor de suas vendas.
essa comiss�o � calculada de acordo com:
-abaixo de 5k de vendas ele tem uma comiss�o de 5% somada ao salario
-acima de 5k de vendas ele tem uma comiss�o de 15% somada ao salario*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float Salafinal,Salainicial, vendas, com;
	
	
	printf("\nCalculo de comiss�o\n");
	
	printf("Informe o salario mensal: ");
	scanf("%f", &Salainicial);
	
	printf("Informe o valor obtido com as vendas: ");
	scanf("%f", &vendas);
	
	system("\n\n");
	system("pause");
}
