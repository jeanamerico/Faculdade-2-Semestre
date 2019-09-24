/**um pedreiro pensando em evitar desperdicios necessita de um sistema que auxilie na contagem dos tijolos necessarios para levantar um muro.
faça um programa que sollucione o problema**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float Tbase, Taltura, base, altura, qtitijolos;
	
		
	setlocale(LC_ALL,"portuguese");
	
	printf("informe a base do local desejado:");
	scanf("%f", &base);
	printf("Informe a altura do local desejado:");
	scanf("%f", &altura);
	printf("Informe a base do tijolo:");
	scanf("%f", &Tbase);
	printf("Informe a altura do tijolo:");
	scanf("%f", &Taltura);
	
	qtitijolos = (base * altura) / (Tbase * Taltura);
	
	printf("Quantidade de tijolos necessarios: %.2f\n\n", qtitijolos);
	
	system("\n\n");
	system("pause");
}
