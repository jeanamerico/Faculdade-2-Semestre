#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	float vt,vb,vn,vv,vvp,vnp,vbp;
	
	printf("informe a quantidade de votos validos:\n");
	scanf("%f", &vv);
    
	
	printf("informe a quantidade de votos brancos:\n");
	scanf("%f", &vb);
	
	
	printf("informe a quantidade de votos nulos:\n");
	scanf("%f", &vn);
	
	
	printf("\ninforme a quantidade de votos total :\n");
	vt = vv + vb + vn;
	printf("O total de votos é %.0f\n", vt);


    vvp = (vv * 100) / vt;
    printf("\nA porcentagem de votos validos é %.1f%%", vvp);
    vbp = (vb* 100) / vt;
    printf("\nA porcentagem de votos Brancos é %.1f%%", vbp);
    vnp = (vn * 100) / vt;
    printf("\nA porcentagem de votos Nulos é %.1f%%", vnp);
	
	system("\n\n");
	system("pause");
}
