#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
setlocale(LC_ALL,"portuguese");

float mes, dia, resulm, resuldia;
int ano=12;
printf ("Informe sua idade em ano para saber quantos dias voc� tem:");
scanf("\n%f", &dia);
resuldia = dia * 365;
printf("Voc� tem %.0f dias de vida\n", resuldia);

printf("informe sua idade em anos para saber quantos meses voc� tem:");
scanf("%f", &mes);
resulm =  (ano * mes);
printf("Voc� tem %.0f meses de vida" , resulm);

system("\n\n");
system("pause");
}
