#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");
 float entrada, saida;
 	
 printf("Informe algum numero:\n");
 scanf("%f", &entrada);
 if (entrada >=0 ){
     printf("Numero positivo!");
}else{
    printf("Numero negativo!");
}

system("\n\n");
system("pause");
}
