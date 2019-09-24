#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
setlocale(LC_ALL,"portuguese");
float fcar,jurosi,pji,jurosd,pd,valorf;

	printf("Informar o custo de fabricação do carro:", &fcar);
	scanf("%f", &fcar);
	printf("Favor informar o percentual do distribuidor:", &jurosd);
	scanf("%f", &jurosd);
	printf("Favor informar o percentual do imposto:", &jurosi);
	scanf("%f", &jurosi);
	
    pd = (fcar * jurosd) /100;
    pji = (fcar * jurosi) /100;
	valorf = pji + pd + fcar; 
	
	printf("\n%.2f", valorf);
	
	system("\n\n");
	system("pause");
}
