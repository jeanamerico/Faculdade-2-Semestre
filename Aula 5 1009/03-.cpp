#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
system("color 0A");
    setlocale(LC_ALL,"portuguese");
	float salario, salario2, valorfinal, SP, S2P;
	
	printf("Favor inserir o valor do salario ANTERIOR:");
	scanf("%f", &salario);
	printf("Favor inserir o valor do salario ATUAL:");
	scanf("%f", &salario2);
	
	valorfinal = salario + salario2;
	SP = (salario * 100) / valorfinal;
	S2P = (salario2 * 100) / valorfinal;
	
	printf("A diferen�a entre os dois salarios � de %.2f\n", valorfinal);
	printf("O salario antigo � de %.1f%%\n", SP);
	printf("A diferen�a do novo salario � de %.1f%%\n", S2P);	
	
	system("\n\n");
	system("pause");
}
