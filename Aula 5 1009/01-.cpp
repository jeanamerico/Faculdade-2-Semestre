#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");
float mesf, dia, resulm, resuldia, difdia, difmes;
int ano=12, mes=30;
printf ("Informe sua idade em ano para saber quantos dias voc� tem:");
scanf("\n%f", &dia);
printf("Informe quantos meses ja se passaram depois do aniversario? 'MM'");
scanf("\n%f", &difdia);
resuldia = (dia * 365) + mes * difdia;
system("cls");
printf("Voc� tem %.0f dias de vida\n", resuldia);
system("pause");
printf("informe sua idade em anos para saber quantos meses voc� tem:");
scanf("%f", &mesf);
printf("Informe quantos meses ja se passaram depois do aniversario? 'MM'");
scanf("\n%f", &difmes);
resulm=(ano * mesf) + mes * difmes;
system("cls");
printf("Voc� tem %.0f meses de vida\n" , resulm);
system("\n\n");
system("pause");
}
