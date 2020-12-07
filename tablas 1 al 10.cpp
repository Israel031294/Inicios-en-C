#include <stdlib.h>
#include <stdio.h>


main ()
{
    int opc;
    int tab[10][10];
    printf("PROGRAMA QUE CALCULA LAS TABLAS DE MULTIPLICAR DEl 1 AL 10\n\2");
    for (int i=0;i<=10;i++)
    {
        for (int j=0;j<=10;j++)
        {
            if(tab[i][j]=i*j)
            {
            printf("%i\t",tab[i][j]); 
            }
        }
    printf("\n");
    }
    system("PAUSE");
}
