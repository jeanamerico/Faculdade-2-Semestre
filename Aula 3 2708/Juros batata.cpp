/** um consumidor deseja calcular o valor de cada parcela de uma determinada compra.
Na loja em que a compra foi efetuada, qualquer parcelamento tem um acrescimo de 10% de juros no valor final.
Voce como desenvolvedor foi contratado para desenvolver tal programa se vire!!!**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float parc, juros, produto, resultado;
	juros= (float) 0.1;	
	
	printf("Programa de calculo de parcelas:\n\n");
	
	
	printf ("informe o valor total do produto:");
	scanf("%f", &produto);
	printf ("informe a quantidade de parcelas:");
	scanf("%f", &parc);
	
	resultado= (produto + (produto * juros))/ parc;
	
	printf("Valor de cada parcela: %.2f\n\n", resultado);
	printf("Valor final do produto:%.2f\n\n", produto*1.1);
	
	system("\n\n");
	system("pause");
}
