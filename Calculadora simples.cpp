//exe#47
#include <iostream>
main ()
{
	int a,b;
	float mult,div,sub,soma;
	printf ("Digite um numero: \n");
	scanf ("%d",&a);
	printf ("Digite outro numero: \n");
	scanf ("%d",&b);
		mult=a*b;
		div=a/b;
		sub=a-b;
		soma=a+b;
	system ("cls");
	printf ("A multiplicacao dos numeros %c: %.0f \n",130,mult);
	printf ("A divisao dos numeros %c: %.0f \n",130,div);
	printf ("A subtracao dos numeros %c: %.0f \n",130,sub);
	printf ("A soma dos numeros %c: %.0f \n",130,soma);
	system ("pause>>null");
	return 0;
}
