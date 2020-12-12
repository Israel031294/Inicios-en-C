#include <stdio.h>
#include <stdlib.h>
//autor jimenez lopez israel



main()
{
	int acum=0;
	int acumi;
int i, limite;
	int op;
	while(op!=2)
	{
	printf("Programa que dada una lista de N numeros determina:\n\t1)Cual es el mayor y su posicion.\n\t2)Cual es el menor y su posicion.\n");
	printf("Cuantos numeros deseas ingresar:\n ");
	scanf("%i", &limite);
	while (limite<=0)
	{
printf("Cuantos numeros desas ingresar: ");
scanf("%i", &limite);
}
printf("\n");
int arreglo[limite];
for(i=0; i<=(limite-1); i++)
	{
	printf("valor %i: ", i+1);
	scanf("%i", &arreglo[i]);
	if (acum<arreglo[i])
		{
		acum=arreglo[i];
		}
		if (acumi>arreglo[i])
			{
			acumi=arreglo[i];
			}			
	}
	printf("\n\nEl Numero Mayor es: %i", acum);
	printf("\nEl Mayor se encuentra en la posicion: ");
	for (i=0; i<=(limite-1); i++)
	{
		if(acum==arreglo[i])
			{
			printf("[%i] ", i+1); 
			}
	}
	printf("\nEl Numero Menor es: %i", acumi);
	printf("\nEl Menor se encuentra en la posicion: ");
	for (i=0; i<=(limite-1); i++)
	{	
	if (acumi==arreglo[i])
		{
		printf("[%i] ", i+1); 
		}
	}
	printf("Desea repetir el programa\n1=si\n2=no\n");
	scanf("%i",&op);
	while(op<1 || op>2)
	{
	printf("Desea repetir el programa\n1=si\n2=no\n");
	scanf("%i",&op);
	}
}
system("PAUSE");
}
