/*uma universidade possui um determinado sistema de aprova��o e reten��o dentro das disciplinas baseado na seguinte regra:
os alunos fazem 2 avalia��es semestrais (av1 e av2) onde de acordo com a media obtida s�o classificados em :
-media maior ou igual a 7 aprovado
-media maior ou igual a 4 exame
-menor que 4 reprovado
/*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("color 80");
	setlocale(LC_ALL,"portuguese");
	float nAV1, nAV2, nEXA, Notafinal, NotafinalE,abc;
	
	printf("Insira a nota da primeira avalia��o:");
	scanf("%f", &nAV1);
	
	printf("Insira a nota da segunda avalia��o:");
	scanf("%f", &nAV2);
	
	Notafinal= (nAV1 + nAV2)/2;
		
	if (Notafinal >= 7){
		printf("Aprovado!!");
	}
	else if (Notafinal >=4 && Notafinal <7 ){
		printf("Exame!!\n");
		abc =10-Notafinal;
		printf("\nVoc� precisa tirar %.1f!", abc);	
		
	printf("\ninsira a nota de exame:");
	scanf("%f", &nEXA);
	if(nEXA >= abc){
		printf("Aprovado");
	}
	
	
	}
	
	
	else{
		printf("\nReprovado");
	}
	
	system("\n\n");
	system("pause");
}


