#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");
 int qtd;
 float preco1, preco2, maca;
 preco1 = 1.30;
 preco2 = 1.00;
 
 printf("Informe a quantidade de maçãs:\n");
 scanf("%d", &qtd);
 
 if(qtd >=12){
 	maca = qtd * preco2;
 	printf("O valor em R$: %.2f", maca);
 }else{
 	maca = qtd * preco1;
 	printf("O valor em R$: %.2f", maca);
 }
 
system("\n\n");
system("pause");
}
