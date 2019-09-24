#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
int AV1, AV2, mediaf;

printf("Insira a nota a 1A.:");
scanf("%d", &AV1);
printf("Insira a nota a 2A.:");
scanf("%d", &AV2);

mediaf = (AV1 + AV2) / 2;

if(mediaf >=6){
	printf("aprovado");
}else{
	printf("reprovado");
}
printf("\nA media aritmetica é:%d", mediaf);

system("\n\n");
system("pause");
}
