#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
 setlocale(LC_ALL,"portuguese");
 
 int valor1;
 
 printf("valor insira um valor");
 scanf("%d", &valor1);
 
 if (valor1 >= 10){
    printf("O valor inserido é maior que 10");
 }else{
 	printf("O valor é menor que 10");
 }
 
system("\n\n");
system("pause");
}
