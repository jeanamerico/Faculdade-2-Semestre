//inclus�o de bibliotecas

#include<stdio.h> //entrada e saida
#include<stdlib.h> //comandos sistem
#include<locale.h> //caracteres

int main(void){
	
	//variaveis
	char nome[30];
	char str[30];
	int numero;
	int dia, mes, ano;
	
	
	setlocale(LC_ALL,"portuguese"); //reconhecer caracteres especiais 
	printf("Universidade de guarulhos - Ci�ncia da computa��o - 2� SEMESTRE - Programa��o\n\n");
	
	printf("Coloque seu nome: ");
	gets (str); //entrada de dados
	printf("nome %s ", str); 
	
	printf("Coloque sua idade: "); //solicita a entrada de dados
	scanf("%d", &numero); //entrada de dados "idade"

	if(numero <=17){ //if=se a idade for menor que 17 n�o faz cadastro
	printf("Necessario ser maior de idade para completar o cadastro!"); //mensagem de erro cadastral
	exit(-1); //quit do terminal
	}
	else(numero >=18);{ //else= se n�o, a idade sendo maior que 18 anos o cadastro continua para finalizar
	printf("Informe a data de nascimento:"); //solicita a data de nascimento
	scanf("%d %d %d", &dia, &mes , &ano); //entrada de dados solicitando dia,mes,ano
	printf("Bem-vindo %s!!! \nVoc� esta ficando velho %d!", nome,numero); //sauda��es 
}
	system("\n\n");
	system("pause");
}	
