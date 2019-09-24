/* Um treinador de basquete deseja dividir seus atletas em quatro categorias de acordo com a altura de cada um:

Nivel A: ate 1,70
Nivel B: ate 1,71->1,80
Nivel C: ate 1,81->1,90  
Nivel D: acima de 1,90 

Ao termino da separação dos atletas devem ser exibidos quantos jogadores ficaram em cada categoria. Deve ser mostrado tambem a altura do menor jogador, que será
excluido da equipe.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int cont =0;
	int qtdeA=0, qtdeB=0,
		qtdeC=0, qtdeD=0;
	float altura,menorAlt;
	system("color 02");
	setlocale(LC_ALL,"portuguese");
	
	do{
		printf("******* programa dos atletas ************");
		printf("\nEntre com a altura do atleta:\n");
		scanf("%f",&altura);
		
		if(altura !=0){
			cont++;
			
			if(cont == 1){
				menorAlt = altura;
			}else{
				if(altura < menorAlt){
					menorAlt = altura;
				}
			}
		if(altura <= 1.7){
			qtdeA++;
		}else if(altura <=1.8){
			qtdeB++;
		}else if(altura <=1.9){
			qtdeC++;
		}else{
			qtdeD++;
		}	
		}
		system("cls");
	}while(altura!=0);
	
	cont = qtdeA + qtdeB + qtdeC + qtdeD;
	
	printf("Total de atletas: %d \n",cont);
	printf("Nivel A: %d\n", qtdeA);
	printf("Nivel B: %d\n", qtdeB);
	printf("Nivel C: %d\n", qtdeC);
	printf("Nivel D: %d\n\n", qtdeD);
	
	printf("o menor jogador possui %.2fm e será removido do time.\n",menorAlt);
	cont--;
	printf("\nRestam %d atletas.\n", cont);
	
	system("\n\n");
	system("pause");
}
