/*um funcionario que trabalha com vendas foi premiado com um aumento em seu salario,baseado em uma comissão que varia de acordo com o valor de suas vendas.
essa comissão é calculada de acordo com:
-abaixo de 5k de vendas ele tem uma comissão de 5% somada ao salario
-acima de 5k de vendas ele tem uma comissão de 15% somada ao salario*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float Salafinal,Salainicial, vendas, com;
	
	
	printf("\nCalculo de comissão\n");
	
	printf("Informe o salario mensal: ");
	scanf("%f", &Salainicial);
	
	printf("Informe o valor obtido com as vendas: ");
	scanf("%f", &vendas);
	
	system("\n\n");
	system("pause");
}
