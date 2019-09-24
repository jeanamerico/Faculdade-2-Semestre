#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	system("color 80");
	setlocale(LC_ALL,"portuguese");
	
	float av1, av2, m12, exame, examtotal;
	
	printf("Informe o valor da AV1:");
	scanf("%f", &av1);
	
	printf("Informe o valor da AV2:");
	scanf("%f", &av2);
	
	m12= (av1+av2)/2;
	
	if (m12 >=7){
		printf("Aprovado!");
	}else if(m12 >=4 && m12 <7){
		printf("Parabens você esta de exame!");
		examtotal=10-m12;
		printf("\nVocê precisa tirar %.1f", examtotal);
		printf("\nInsira a nota do exame:");
		scanf("%f", &examtotal);
	
	
		if (examtotal>=5);
	printf("aprovado por exame");
}
		else{
	printf ("Reprovado");
}

system("\n\n");
system("pause");
}
