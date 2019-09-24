/*o mesmo programa sem o uso da variavel aux*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int a, b;
	
	printf("Informe o valor de A:");
	scanf("%d",&a);
	printf("Informe o valor de B:");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	
	printf("valor de A: %d", a);
	printf("valor de b: %d", b);
	
	system("\n\n");
	system("pause");
	
}
