#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    int numdia;
    int numsem;

    printf("Ingrese numero correspondiente al dia del a%co\n",164);
    scanf("%d",&dia);

    printf("\n");

    if (dia >= 1 && dia <= 366)

      {
          numdia=dia/7;
          numsem=dia-(numdia*7);

          switch(numsem)
          {
              case 1: printf("El dia es: \nDomingo");
              break;
              printf("\n");
              case 2: printf("El dia es: \nLunes");
              break;
              printf("\n");
              case 3: printf("El dia es: \nMartes");
              break;
              printf("\n");
              case 4: printf("El dia es: \nMiercoles");
              break;
              printf("\n");
              case 5: printf("El dia es: \nJueves");
              break;
              printf("\n");
              case 6: printf("El dia es: \nViernes");
              break;
              printf("\n");
              case 7: printf("El dia es: \nSabado");
              break;
              printf("\n");
          }


      }
       printf("\n");
       printf("\n");
    return 0;
    getch();
}
