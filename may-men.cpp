#include<stdlib.h>
#include<stdio.h>

main ()
{
     int dato=0;
     int men=0;
     int i=0;
     int j=0;
     int rep=0;
     

 while(rep!=2)
 {    
     printf("PROGRAMA QUE PERMITE INTRODUCIR N ELEMENTOS NUMERICOS ENTEROS E IMPRIMIRLOS DE MAYOR A MENOR.\n");
     printf("Cuantos numeros desea ingresar\n");
     scanf("%i",&dato);
     while(dato<=0)
     {
                  printf("solo mayores a o o positivos\nintente nuevamente\n");
                  scanf("%i",&dato);
     }
     int num[dato];
     for(int i=0;i<=(dato-1);i++)
     {
             printf("dame valor %i",i+1);
             scanf("%i",&num[i]);
     }     
     

for(i=0; i<(dato-1); i++)
{
for (j=i+1; j<dato; j++)
{
if(num[j]<num[i])
{
men=num[j];
num[j]=num[i];
num[i]=men;
}
}
}

printf("los numeros ordenadados decendentemente son:\n");

for (j=dato-1; j>=0; j--)
{
printf("[%i]",num[j]);
printf("\n");
}
printf("Deseas repetir el programa\n1=si\n2=no\n");
scanf("%i",&rep);
while(rep<1 || rep>2)
    {
                printf("Desea repetir el programa\n 1 =si\n no= 2\n",&rep);
                 scanf("%i",&rep);
                 
                }
    } 



system("PAUSE");

}
