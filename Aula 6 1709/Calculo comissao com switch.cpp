#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>


int main(){
	system("color 02");
	setlocale (LC_ALL,"portuguese");
	int cod;
	float vendas,salFinal, salFixo,comissao;
	char nome[21], resp;
	bool erro = false;
	
	do{
	printf("Informe o codigo do funcionario:\n");
	scanf("%d", &cod);
	
	switch(cod){
		case 1:
			salFixo = 800;
			comissao = 0.05;
			strcpy(nome,"Zeca");
			break;
		case 2:
			salFixo = 1000;
			comissao = 0.08;
			strcpy(nome,"Pedro");
			break;
		case 3:
			salFixo = 1200;
			comissao = 0.10;
			strcpy(nome,"Nino");
			break;
		case 4:
			salFixo = 1500;
			comissao = 0.12;
			strcpy(nome,"Biba");
			break;
		default:
			salFixo = 0;
			comissao = 0;
			strcpy(nome,"Inexistente");
			erro = true;
			break;
	}
	
	if(erro == false){
		printf("Favor informar o valor das vendas:\n");
		scanf("%f", &vendas);
		
		salFinal = salFixo + (vendas * comissao);
		
		system("cls");
		printf("Relatorio final:\n\n");
		
		printf("Nome do funcionario: %s\n", nome);
		printf("Salario-base: R$%.2f\n", salFixo);
		printf("Comissão: %.0f%%\n", comissao * 100);
		printf("Salario Total: R$%.2f\n", salFinal);
		}else{
			printf("Codigo invalido!");
		}
		printf("\n\nDeseja continuar? (s/n)");
		scanf("%s", &resp);
		erro = false;
		system("cls");
		
	}while(resp == 's');
	
	system("\n\n");
	system("pause");
}
