#include<stdio.h>
#include<stdlib.h>
int fibonacci(int dato)
{
    if(dato<2)
    return dato;
    else
    return fibonacci(dato-1)+ fibonacci(dato-2);
}
main ()
{
     int dato=0;
     int res=0; 
     int rep=0;   
     while(rep!=2)
     {     
     printf("Programa que muestra la serie de fibonacci segun cuantos numeros indique el usuario ^_^\n");
     printf("ingrese cuantos numero deseas obtener de la serie?\n");
     scanf("%i",&dato);
     while(dato<=2)
     {
                   printf("Error la serie de fibonacci nu puede calcularse con estos valores\nintente de nuevo\n");
                   scanf("%i",&dato);
     }
     for(int i=0;i<=(dato-1);i++)
     {
             res=fibonacci(i);
             printf("[%i]",res);
                        
     }
     printf("\n");
     printf("Desea repetir el programa\n1=si\n2=no\n");
     scanf("%i",&rep);
     while (rep<1 || rep>2)
     {
           printf("Desea repetir el programa\n1=si\n2=no\n");
           scanf("%i", &rep);
     }
     }  
     system("PAUSE"); 
}
 



       
       
                 
     
      
          
      
      
                   
                     
     
