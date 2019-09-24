#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float giros, dist, diam, pi, pedaladas;
	pi= (float)3.1416; 
	
	
	
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Programa da bicicreta\n");
	
	printf("\nInforme os giros por pedalada:");
	scanf("%f", &giros);
	
	printf("\nInforme o diâmetro (m) da roda:");
	scanf("%f", &diam);
	
	printf("\nInforme a distancia a ser percorrida:");
	scanf("%f", &dist);
	
	pedaladas= (dist / (pi* diam))/giros;
	
	printf("pedaladas necessarias: %0.f", pedaladas);
	
	system("\n\n");
	system("pause");
}
