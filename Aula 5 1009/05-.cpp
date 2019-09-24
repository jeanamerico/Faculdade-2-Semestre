#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL,"portuguese");
    float salarioi, salariop,salariof, valorc, porcentagema;
	int carros;
	
	printf("favor inserir o valor do salario inicial:\n");
	scanf("%f", &salarioi);
	printf("favor inserir o total de carros vendidos:\n");
	scanf("%d", &carros);
	printf("favor inserir o valor total de carros vendidos:\n");
	scanf("%f", &valorc);
	printf("favor inserir a porcentagem de ganho:");
	scanf("%f", &porcentagema);
	
	salariop = (valorc * porcentagema) / 100;
	salariof = salariop + salarioi;
	
	printf("O total em R$: %.2f\n", salariof);
	printf("Valor ganho em comissão R$:%.2f", salariop);
	
	system("\n\n");
	system("pause");
}
