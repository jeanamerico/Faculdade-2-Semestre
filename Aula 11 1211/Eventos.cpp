#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int poltronas[250];
int i;

void esvaziarPoltronas(){
	for(i=0;i<250; i++){
		poltronas[i] = 0;
	}
}

void exibirMapa(){
	char status[10];
	for (i=0; i<250; i++){
		
		if(i==0)
			printf("## Setor VIP ##\n\n");
		else if(i==50){
			printf("\n\n");
			system("pause");
			printf("\n## Setor Comum ##\n\n");
		}
		else if(i==150){
			printf("\n\n");
			system("pause");
			printf("\n## Setor Superior ##\n\n");
		}
		if(poltronas[i]==0){
			strcpy(status, "LIVRE");
		}else{
			strcpy(status, "Ocupado");
		}
		printf("%d\t- %s ||\t", i+1, status);
		if((i+1)%5 == 0){
			printf("\n");
		}
	}
	getch();
	system("cls");
}

int montarMenu(){
	int opcao;
	printf("** Programa eventos***\n\n");
	printf("Entre com a opção desejada:\n\n");
	printf("1 - Efetuar venda de ingressos\n");
	printf("2 - Visualizar mapa do evento\n");
	printf("3 - Relatorio de Caixa\n");
	printf("4 - Sair\n");
	printf("Opção: ");
	scanf("%d", &opcao);
	system("cls");
	return opcao;
}


int main(){
	int menu;
	setlocale(LC_ALL,"");
	
	esvaziarPoltronas();
	do{
		
		menu = montarMenu();
		switch(menu){
			case 1://venda
				
				break;
				
			case 2://mapa
				exibirMapa();
				break;
				
			case 3://relatorio
				
				break;
				
			case 4:
				break;
				
			default:
				printf("Opção invalida! \n\n");
				_sleep(3500);
				system("cls");
				break;
		}
		
		
	}while(menu != 4);
	
	
	
}
