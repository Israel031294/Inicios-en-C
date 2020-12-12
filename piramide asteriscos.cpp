#include <stdio.h>
#include <stdlib.h>
//autor jimenez lopez israel



main()

{
int dato,rep;
 while(rep!=2)    
     { 
            printf("De cuantos numeros deseas que sea la piramide de asteriscos?\n");
            scanf("%i",&dato);
             while(dato<=0)
                        {
                                     printf("Error, solo acepta numeros mayores a cero\n intente nuevamente\n");
                                     scanf("%i", &dato);
                        }   
                for(int i=1;i<=dato;i++)
                         {
                                 for(int j=1;j<=i;j++)
                                     {
                                             printf("*");
                                     }
                                      printf("\n");
                           }           
             printf("Deseas repetir el programa?\nsi=1\nno=2\n");
             scanf("%i", &rep);
             while(rep<1 || rep>2)
                         {              
                             printf("deseas o no continuar en el programa? \nsi=1\nno=2\n  " );                                                                                                                       scanf("%i",&rep);
                             system("PAUSE");
                       }
}}
