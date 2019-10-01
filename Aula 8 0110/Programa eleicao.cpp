/*Uma eleição, composta por 4 candidatos será realizada e os votos computados por um terminal, onde cada eleitor deverá informar o numero de seu candidato,
sendo assim,o voto contabilizado.há ainda a possibilidade de votos brancos e nulos que também serão computados pelo sistema.

Num.	Nome.
1		Ortiz
2		Erwin
2		Heredia
4		Vanessa
0		Nulo
X		Brancos

O terminal, possui uma codificação que ao digitar um valor negativo, encerra-se, o processo de votação. Ao termino, deve ser exibido um relatorio contendo.
- Numero de votos em cada candidato + percentual
- Número de votos nulos e brancos + percentual.
- Total de eleitores.

Desenvolva a aplicação que simule o terminal de votos acima descrito.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	int numCand, tEleit = 0;
	int qtCand1 = 0,qtCand2 = 0,qtCand3 = 0,
		qtCand4 = 0,qtNulo = 0,qtBran = 0;
	float pCand1,pCand2,pCand3,pCand4, pNulo,pBran;
	char nome[21];
	int i;
	
	setlocale(LC_ALL,"portuguese");
	do{
		printf("*************Eleição*************\n");
		
		printf("Informe o numero do candidato:\n");
		printf("Numero	Candidato\n");
		printf("---------------------------\n");
		printf("1	Ortiz\n");
		printf("2	Erwin\n");
		printf("3	Heredia\n");
		printf("4	Vanessa\n");
		printf("0	Nulo\n");
		printf("X	Branco\n");
		
		printf("Seu voto:");
		scanf("%d", &numCand);
		
		if(numCand == 1){
			strcpy(nome,"Ortiz");
			qtCand1++;
			tEleit++;
		}else if(numCand == 2){
			strcpy(nome,"Erwin");
			qtCand2++;
			tEleit++;
		}else if(numCand == 3){
			strcpy(nome,"Heredia");
			qtCand3++;
			tEleit++;
		}else if(numCand == 4){
			strcpy(nome,"Vanessa");
			qtCand4++;
			tEleit++;
		}else if(numCand == 0){
			strcpy(nome,"Nulo");
			qtNulo++;
			tEleit++;
		}else if(numCand <= -1){
			break;
		}else{
			strcpy(nome,"Branco");
			qtBran++;
			tEleit++;
		}
		printf("\n\n Voto computado: %s!", nome);
		_sleep(800);
		
		system("cls");
	}while(numCand >-1);
	//Calculos
		pCand1 = ((float)qtCand1/(float)tEleit)*100;
		pCand2 = ((float)qtCand2/(float)tEleit)*100;
		pCand3 = ((float)qtCand3/(float)tEleit)*100;
		pCand4 = ((float)qtCand4/(float)tEleit)*100;
		pNulo = ((float)qtNulo/(float)tEleit)*100;
		pBran = ((float)qtBran/(float)tEleit)*100;
	//resultados
	system("cls");
	printf("*Resultados Finais*\n");
	
	printf("Ortiz: %d\n", qtCand1);
	for(i=0; i<pCand1;i++){
		printf("#");
	}
	printf(" - %.1f%%\n\n", pCand1);
	
		printf("Erwin: %d\n", qtCand2);
	for(i=0; i<pCand2;i++){
		printf("#");
	}
	printf(" - %.1f%%\n\n", pCand2);
	
		printf("Heradia: %d\n", qtCand3);
	for(i=0; i<pCand3;i++){
		printf("#");
	}
	printf(" - %.1f%%\n\n", pCand3);
	
		printf("Vanessa: %d\n", qtCand4);
	for(i=0; i<pCand4;i++){
		printf("#");
	}
	printf(" - %.1f%%\n\n", pCand4);
	
		printf("Votos nulos: %d\n", qtNulo);
	for(i=0; i<pNulo;i++){
		printf("#");
	}
	printf(" - %.1f%%\n\n", pNulo);
	
		printf("Votos Brancos: %d\n", qtBran);
	for(i=0; i<pBran;i++){
		printf("#");
	}
	printf(" - %.1f%%\n\n", pBran);
	
	printf("Total de eleitores: %d\n", tEleit);
	
	
	
	system("pause");
}
