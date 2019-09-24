#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
int num1, num2;

printf("Informe o primeiro valor:\n");
scanf("%d", &num1);
printf("Informe o segundo valor:\n");
scanf("%d", &num2);

if(num1 > num2){
	printf("Primeiro valor é maior: %d\n", num1);	
}else if(num1 < num2){
	printf("Segundo valor é maior: %d\n", num2);
}else if(num2 = num1){
	printf("Os numeros são iguais a: %d", num2);
}

system("\n\n");
system("pause");
}
