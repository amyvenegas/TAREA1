#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float preciolitro,monto,sumamonto,litros,sumalitros,rend,promedio,sumarend,mejor,peor;
int kms,i,sumakms;
char c;


    printf("Ingrese los kilometros recorridos (-1 para salir): ");
    scanf("%d",&kms);

        while ((c=getchar())!= '\n' && c!=EOF);
        i=0;
        sumarend=0;
        sumakms=0;
        sumalitros=0;
        sumamonto=0;

            while (kms!=-1)
        {
            printf("Ingrese el precio del combustible por litro: ");
            scanf("%f",&preciolitro);

            printf("Ingrese el monto total de la compra: ");
            scanf("%f",&monto);

            litros=monto/preciolitro;

            rend=(litros*100)/kms;

            printf("Rendimiento (1/100km) >> %.2f\n",rend);
            printf("\n");
            printf("\n");

            i=i+1;
            sumarend=sumarend+rend;
            sumakms=sumakms+kms;
            sumalitros=sumalitros+litros;
            sumamonto=sumamonto+monto;

                if (i==1)

                {
                    mejor=rend;
                    peor=rend;
                }

                else
                {
                    if (rend<mejor)
                        mejor=rend;
                    if (rend>peor)
                        peor=rend;
                }

             printf("Ingrese los kilometros recorridos (-1 para salir): ");
             scanf("%d",&kms);
        }

        printf("\n");
        printf("\n");

        promedio=sumarend/i;
        printf("Rendimiento promedio (1/100km):%.4f\n",promedio);
        printf("Mejor rendimiento(1/100km):%.2f\n",mejor);
        printf("Peor rendimiento(1/100km):%.2f\n",peor);
        printf("Distancia total recorrida(km): %d\n",sumakms);
        printf("Combustible total consumido (1): %.2f\n",sumalitros);
        printf("Costo total de su vehiculo($):%.2f\n",sumamonto);

}


