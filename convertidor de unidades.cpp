#include <stdlib.h>
#include <stdio.h>


main()
{
    int op,opcion;
    float met=0;
float centi=0;
float kilo=0;
float pies=0;
float pulg=0;
float yardas=0;
    
    
    do
    printf(" PROGRAMA QUE REALIZA LAS SIGUIENTES CONVERSIONES.\n");

printf ("\n\t Selecciona una opcion "); 
printf ("\n\t 1-METROS A CENTIMETRO"); 
printf ("\n\t 2-CENTIMETROS A METROS"); 
printf ("\n\t 3-KILOMETROS A CENTIMETROS "); 
printf ("\n\t 4-METROS A PIES"); 
printf ("\n\t 5-PIES A PULGADAS"); 
printf ("\n\t 6-YARDAS A CENTIMETROS "); 
printf ("\n\t 7-SALIR DEL PROGRAMA\n\t\t");
scanf("%d", &opcion); 
switch(opcion) 
{ 
case 1: 
    
     
      printf(" Cuantos metros quieres su equivalencia en centimetros\n");
      scanf(" %g",&met);
 
      centi= met*100;
      printf(" %g metros equivalen a %g centimetros",met,centi);
      
       
break; 
case 2: 
    
    printf(" Cuantos centimetros quieres ver su equivalencia en metros\n");
    scanf("%g", &centi);
    met=centi/100;
    printf("%g centimetros equivalen a %g metros",centi,met);
break; 
case 3: 
    
    printf("cuantos kilometros quieres ver la equivalencia en centimetros\n");
    scanf("%g",&kilo);
    centi=kilo*100000;
    printf("%g kilometros equivalen a %g centimetros",kilo,centi);
     break; 
case 4: 
     printf("Cuantos metros quieres convertir a pies?\n");
     scanf("%g", &met );
     pies=3.28*met;
     printf("%g metros equivalen a %g pies",met,pies);
    
      
break; 
case 5: 
     printf("Cuantos pies quieres convertir a pulgadas?\n");
     scanf("%g",&pies);
     pulg=12*pies;
     printf("%g pies equivalen a: %g pulgadas",pies,pulg );
break; 
case 6: 
     printf("Cuantas yardas quieres ver la equivalencia a centimetros\n");
     scanf("%g",&yardas);
     centi=91.44*yardas;
     printf("%g yardas equivalen a %g centimetros",yardas,centi );
break; 
case 7:
     return 0;
break;     
     
default: 
        printf ("\n\t Opcion no valida\n"); 
break; 
}/* fin del switch*/ 
printf ("\n\t Volver a ver Menu?"); 
printf ("\n\t si teclea 1 si no 2\n\t"); 
scanf("%d",&r); 
          
          printf("\nSi desea repetir el programa presione 1 sino presione 2\n");
    scanf("%i",&opc);
    
    while(opc<1 || opc>2)
    {
                printf("Siga instrucciones solo se acepta 1 y 2\n");
                scanf("%i",&opc);
                }
    } 
    while(opc==1);
     system ("PAUSE");
    
}
