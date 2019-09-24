/* Um food truck precisa de um sistema que ajude o usuario na montagem dos combos que são vendidos aos clientes. Esses combos, são compostos de um lanche principal,
um acompanhamento e uma bebida. Os itens disponiveis seguem de acordo com o cardapio: 
Cod.    Lanche      Preço
1		Pizza		7,50
2		Hot-dog		5,00
3		Xbruguer	10,00
4		Beirute		18,00

cod.	Acomp.		Preço
1		Fritas		5,00
2		Polenta		8,00
3		Nuggets		6,00
4		Camarão		12,00

Cod.	Bebida		Preço
1		Agua		2,50
2		Pingado		3,50
3		Refrig.		5,00
4		Latão		8,00
Presuma-se que ao escolher um codigo inexistente o cliente não esta optando por determinado item.
Desenvolva um programa que melhor solucione o problema descrito, exibindo o combo selecionado bem como o valor total a ser pago.*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int main(){
	system("color 02");
	setlocale (LC_ALL,"portuguese");
	int codL, codA, codB;
	char nomeL[21], nomeA[21], nomeB[21];
	char resp;
	float total = 0;
	
	do{
		printf("Programa food truck\n\n");
		
		printf("Entre com o código do lanche:\n");
		printf("Código\t\tNome\t\tPreço\n");
		printf("-------------------------------------\n");
		printf("1\t\t|Pizza\t\t|7,50\n");
		printf("2\t\t|Hot-dog\t|5,00\n");
		printf("3\t\t|X-burguer\t|10,00\n");
		printf("4\t\t|Beirute\t|18,00\n");
		printf("Código: ");
		scanf("%d", &codL);
		
		system("cls");
		
		printf("Entre com o código do Acompanhamento:\n");
		printf("Código\t\tNome\t\tPreço\n");
		printf("-------------------------------------\n");
		printf("1\t\t|Fritas\t\t|5,00\n");
		printf("2\t\t|Polenta\t|3,50\n");
		printf("3\t\t|Nuggets\t|6,00\n");
		printf("4\t\t|Camarão\t|12,00\n");
		printf("Código: ");
		scanf("%d", &codA);
		
		system("cls");
		
		printf("Entre com o código da Bebida:\n");
		printf("Código\t\tNome\t\tPreço\n");
		printf("-------------------------------------\n");
		printf("1\t\t|Agua\t\t|2,50\n");
		printf("2\t\t|Pingado\t|3,50\n");
		printf("3\t\t|Refrig.\t|5,00\n");
		printf("4\t\t|Latão\t\t|8,00\n");
		printf("Código: ");
		scanf("%d", &codB);
		
		system("cls");
		
		if(codL == 1){
			strcpy(nomeL, "Pizza");
			total = total + 7.5;
		}else if(codL == 2){
			strcpy(nomeL, "Hot-dog");
			total = total + 5.00;
		}else if(codL == 3){
			strcpy(nomeL, "X-Burguer");
			total = total + 10.00;
		}else if(codL == 4){
			strcpy(nomeL, "Beirute");
			total = total + 18.00;
		}else{
			strcpy(nomeL, "Nenhum lanche");
		}
		
		if(codA == 1){
			strcpy(nomeA, "Fritas");
			total = total + 5.00;
		}else if(codA == 2){
			strcpy(nomeA, "Polenta");
			total = total + 8.00;
		}else if(codA == 3){
			strcpy(nomeA, "Nuggets");
			total = total + 6.00;
		}else if(codA == 4){
			strcpy(nomeA, "Camarão");
			total = total + 12.00;
		}else{
			strcpy(nomeA, "Nunhum acompanhamento.");
		}
		
		if(codB == 1){
			strcpy(nomeB, "Agua");
			total = total + 2.5;
		}else if(codB == 2){
			strcpy(nomeB, "Pingado");
			total = total + 3.5;
		}else if(codB == 3){
			strcpy(nomeB, "Refrig.");
			total = total + 5.00;
		}else if(codB == 4){
			strcpy(nomeB, "Latão");
			total = total + 8.0;
		}else{
			strcpy(nomeB, "Nenhum acompanhamento");
		}
		
		printf("Combo escolhido:\n");
		printf("%s + %s + %s\n", nomeL, nomeA, nomeB);
		printf("Total a pagar: R$%.2f", total);
		
	
		
	printf("\nDeseja efetuar uma nova venda? (s/n)\n");
	scanf("%s", &resp);
	total = 0;
	system("cls");

	}while(resp == 's');
	
	system("\n\n");
	system("pause");
}
