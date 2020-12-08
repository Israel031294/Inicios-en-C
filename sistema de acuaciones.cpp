#include <stdio.h>
#include <stdlib.h>
//autor jimenez lopez israel



main()

{
     float a,b,c,d,e,f,x,y;
     int op;
    
     while(op!=2)
     {
     printf("EL SIGUIENTE SISTEMA DE ECUACIONES LINEALES: \nax + by = c \ndx + ey = f \nELABORAR UN PROGRAMA QUE LEA LOS COEFICIENTES a, b, c, d, e y f, Y QUE CALCULE \nE IMPRIMA LOS VALORES DE X Y Y\n\n");
     
     printf("\nIngrese valor al coeficiente a:  ");
     scanf("%f",&a);
     while(a=0)
     {
                   printf("Error, ingrese valor distinto:  ");
                   scanf("%f",&a);
                   }
                   
     printf("\nIngrese valor al coeficiente b:  ");
     scanf("%f",&b);
     while(b=0)
     {
                   printf("Error,ingrese valor distinto:  ");
                   scanf("%f",&b);
                   }
     
     printf("\nIngrese valor al coeficiente c:  ");
     scanf("%f",&c);
     while(c=0)
     {
                   printf("Error, ingrese valor distinto:  ");
                   scanf("%f",&c);
                   }
     
     printf("\nIngrese valor al coeficiente d:  ");
     scanf("%f",&d);
     while(d=0)
     {
                   printf("Error, ingrese valor distinto:  ");
                   scanf("%f",&d);
                   }
     
     printf("\nIngrese valor al coeficiente e:  ");
     scanf("%f",&e);
     while(e=0)
     {
                   printf("Error, ingrese valor distinto:  ");
                   scanf("%f",&e);
                   }
     
     printf("\nIngrese valor al coeficiente f:  ");
     scanf("%f",&f);
     while(f=0)
     {
                   printf("Error, ingrese valor distinto:  ");
                   scanf("%f",&f);
                   }
     
     x=((c*e)-(b*f))/((a*e)-(b*d));
     printf("\n\nEl valor de x es:  %2.2f\n\n",x);

     y=((a*f)-(c*d))/((a*e)-(b*d));
     printf("El valor de y es:  %2.2f\n\n",y);
     
     printf("\nDesea repetir el programa\n 1 =si\n no= 2\n");
    scanf("%i",&op);
    
     while(op<1 || op>2)
    {
                printf("Desea repetir el programa\n 1 =si\n no= 2\n",&op);
                 scanf("%i",&op);
                  system("PAUSE");
                }
    } 
    
}  
