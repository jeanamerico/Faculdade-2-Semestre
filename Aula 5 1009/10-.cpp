#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
setlocale(LC_ALL,"portuguese");
int anoatual,anonasc, idade;

time_t data_ano;
time(&data_ano);
struct tm*data = localtime(&data_ano);
anoatual = (data->tm_year+1900); 

printf("Ano atual:");
printf("%d", anoatual);
printf("\ninsira o ano de nascimento:\n");
scanf("%d", &anonasc);

idade = (anoatual - anonasc);

if(idade >= 18){
	printf("\nVocê é obrigado a votar kk");
}else if(idade >= 16){
	printf("Você pode votar mas não é obrigado!");
}else(printf("Você não pode votar!"));

system("\n\n");
system("pause");
}
