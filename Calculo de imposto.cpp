//exe#35
#include <iostream>
main ()
{
float sal_brut,irpf,sal_liq;
char nome[20];
int mat;
printf("Digite o nome do funcion%crio:\n",160);
scanf("%s",&nome);
printf("Digite a matricula do funcion%crio:\n",160);
scanf("%d",&mat);
printf("Digite o valor do sal%crio bruto deste funcion%crio:\n",160,160);
scanf("%f",&sal_brut);
if(sal_brut<=1100);
else if(sal_brut>1100 && sal_brut<=2000)
irpf=sal_brut*0.12;
else
irpf=sal_brut*0.17;
sal_liq=sal_brut-irpf;
system("cls");
printf("\n Funcion%crio de nome %s de matr%ccula %d",160,nome,141,mat);
printf("\n O valor do salario sem desconto %C %.2f",130,sal_brut);
printf("\n O imposto a ser pago %c %.2f",130,irpf);
printf("\n O valor do salario liquido %c %.2f",130,sal_liq);
system("pause>>nul");
return 0;
}
