/*desenvolva 1 programa onde o usuario entre com as medidas da base e altura de um retangulo, e o programa calcule a area*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	float area, base, altura;
	
	printf("Informe a base: ");
	scanf("%f", &base);
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	area = altura * base;
	
	printf("A area e: %f", area);
	
	system("\n\n");
	system("pause");
	
}
