#include<stdio.h>
#include<stdlib.h>


int main(){
	int vet[10], i;
	
	printf("**programa inverso**\n\n");
	for(i=0; i<10; i++){
		
		printf("POS[%d]:", i);
		scanf("%d", &vet[i]);
	}
	for(i=9;i>=0; i--){
		printf("%d ", vet[i]);
		
	}
	
	
	printf("\n\n");
	system("pause");
}
