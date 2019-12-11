#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tab[3][3];
int i, j;
int jogAtual = 1, jogadas = 0, vencedor = 0;
bool vitoria = true;

void iniciarTablueiro(){
	for(i=0; i<3; i++){//linhas
		for(j=0;j<3;j++){//colunas
			tab[i][j] = 0;
		}
	}
}

void exibirTabuleiro(){
		for(i=0; i<3; i++){//linhas
		for(j=0;j<3;j++){//colunas
			if(tab[i][j]==1){
				printf("\tX\t||");
			}else if(tab[i][j]==2){
				printf("\tO\t||");
			}else{
				printf("\t \t||");
			}	
		}
		printf("\n==================================================\n");
	}
}

void efetuarJogada(){
	int l, c;
	printf("--- Jogador %d ---\n\n", jogAtual);
	printf("Informe a linha da jogada: ");
	scanf("%d", &l);
	printf("Informe a coluna da jogada: ");
	scanf("%d", &c);
	
	if(tab[l-1][c-1] == 0){
		tab[l-1][c-1] = jogAtual;
		jogadas++;
		
		if(jogAtual == 1) jogAtual++;
		else if(jogAtual == 2) jogAtual--;
	}
}

void verificarVitoria(){
	int var;
	
	for (var = 0; var <3; var++){
		if((tab[var][0]!=0) && tab[var][0] == tab [var][1] && tab[var][0] == tab [var][2]){
			vitoria == true;
		}
	}
	
	for (var = 0; var <3; var++){
		if((tab[0][var]!=0) && tab[0][var] == tab [1][var] && tab[0][var] == tab [2][var]){
			vitoria == true;
		}
	}
	
	if((tab[0][0] != 0) && (tab[0][0] == tab[1][1] && tab[0][0] == tab[2][2])){
		vitoria = true;
	}
	
	if((tab[0][2] != 0) && (tab[0][2] == tab[1][1] && tab[0][2] == tab[2][0])){
		vitoria = true;
	}
	if(jogAtual == 1)
		vencedor = jogAtual + 1;
	else if(jogAtual == 2)
		vencedor = jogAtual - 1;
}

int main(){
	iniciarTablueiro();
	
	while(jogadas < 9){
		efetuarJogada();
		exibirTabuleiro();
		
		printf("\n\n");
		system("pause");
		system("cls");
		
		if(jogadas>=5){
			verificarVitoria();
			if(vitoria == false && jogadas == 9){
				printf("\n\n Deu velha!! \n\n");
			}else if(vitoria == true){
				printf("\n\n Jogador %d Venceu!!", vencedor);
			break;
			}
		}
		
		
		
	}
}
