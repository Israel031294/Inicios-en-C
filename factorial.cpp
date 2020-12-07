#include <stdio.h>
#include <stdlib.h>
//autor jimenez lopez israel

long factorial(long n);

main()

{
  
  int op=0;
  long num=0;
  while(op!=2)
  {
  printf("Programa que dado un numero imprime su Factorial.\n");
  printf("\nIngresa un Numero: ");
  scanf("%i",&num); 
   
   while (num < 0)
    {
            printf("No has introducido un numero valido\n");
            scanf("%i", &num);
    }
    
  printf("\tEl resultado es: %i\n", factorial(num)); 
  printf("\nDeseas repetir el programa?\n\t1)Si\t2)No\t" );
  scanf("%i", &op);
  while(op!=1 && op!=2){
              printf("Ingresa un valor del menu: ");
              scanf("%i", &op);}
  
              }
  
  system("PAUSE");
}

long factorial(long n)

{
  if(n<2)
    return 1;
    else
    return n * factorial(n-1);
}

