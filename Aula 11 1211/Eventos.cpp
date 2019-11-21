#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int poltronas[250], ocupadas = 0, disponiveis = 250;
int i;
float caixa;

void esvaziarPoltronas(){
	for(i=0;i<250; i++){
		poltronas[i] = 0;
	}
}

void exibirMapa(int tmpInicio, int tmpFim){
	char status[10];
	for (i=tmpInicio; i<=tmpFim; i++){
		if(i==0)
			printf("## Setor VIP ##\n\n");
		else if(i==50){
			printf("\n## Setor Comum ##\n\n");
		}
		else if(i==150){
			printf("\n## Setor Superior ##\n\n");
		}
		if(poltronas[i]==0){
			strcpy(status, "LIVRE");
		}else{
			strcpy(status, "Ocup.");
		}
		printf("%d\t- %s ||\t", i+1, status);
		if((i+1)%5 == 0){
			printf("\n");
		}
	}
	system("pause");
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

int efetuarVenda(int tmPoltrona){
	float preco;
	
	if(poltronas[tmPoltrona -1] == 1){
		return - 1;//ocupado
	}else if(tmPoltrona <1 || tmPoltrona>250){
		return -2;//inexistente
	}else{
		if((tmPoltrona-1)>=0 && (tmPoltrona-1)<=49){
			preco = 300;
		}else if((tmPoltrona-1)<=149){
			preco = 200;
		}else{
			preco = 100;
		}
		printf("Valor a pagar: R$ %.2f\n", preco);
		caixa += preco;//caixa=caixa + preco
		poltronas[tmPoltrona-1]= 1;//poltrona ocupada
		ocupadas++;
		disponiveis--;
		
		return 1;
	}//fecha o else
}//fecha o int

void menuVenda(){
	int statusVenda, nPolt, setor;
	int inicio, fim;
	
	system("cls");
				printf("## Processo de Venda de ingresso! ##\n\n");
				printf("Entre com o setor:\n\n");
				printf("1 - Setor Vip\n");
				printf("2 - Setor Comum\n");
				printf("3 - Setor Superior\n\n");
				printf("Setor: ");
				scanf("%d", &setor);
				
				if(setor == 1){
					inicio = 0;
					fim = 49;
				}else if(setor == 2){
					inicio = 50;
					fim = 149;
				}else if(setor == 3){
					inicio = 150;
					fim = 249;
				}else{
					menuVenda();
				}
				exibirMapa(inicio,fim);
				printf("Informe o número da poltrona:");
				scanf("%d", &nPolt);
				
				statusVenda = efetuarVenda(nPolt);
				
				if(statusVenda == -1){
					printf("\n## Poltrona Ocupada!\n\n");
					_sleep(1500);
				}else if(statusVenda == -2){
					printf("\n## Poltrona Inexistente!\n\n");
					_sleep(1500);
				}else{
					printf("\n## Venda Efetuada: %d\n\n", nPolt);
					_sleep(2500);
				}
}

void relatorio(){
	int vips = 0, comuns = 0, sups = 0;
	
	for(i=0; i<250; i++){
		if(poltronas[i] == 1){
			if(i<50){
				vips++;
			}else if(i<150){
				comuns ++;
			}else{
				sups++;
			}
		}
	}
	system("cls");
	printf("## Relatório de vendas ##\n\n");
	printf("Setor vip: %d\n", vips);
	printf("Setor Comum: %d\n", comuns);
	printf("Setor Superior: %d\n", sups);
	printf("Ingressos vendidos: %d\n", ocupadas);
	printf("Ingressos Restantes: %d\n\n", disponiveis);
	printf("-- Total em caixa => %.2f\n\n", caixa);
	system("pause");	
}

int main(){
	int menu;
	setlocale(LC_ALL,"");
	
	esvaziarPoltronas();
	do{
		system("cls");
		menu = montarMenu();
		switch(menu){
			case 1://venda
				menuVenda();
				break;
				
			case 2://mapa
				exibirMapa(0,49);
				exibirMapa(50,149);
				exibirMapa(150,249);
				break;
				
			case 3://relatorio
				relatorio();
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
