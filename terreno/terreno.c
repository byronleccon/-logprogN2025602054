#include <stdio.h>
#include <math.h>
    int main()
{
    int L=12;
    int metrocuadrado;
    float aR, aT, at, iva, pagototal, pagoiva;
    aT=(L/2)*11.61/2;
    aR=L*L/2;
    aT=aT+aR;
    iva= 1.16;
    printf("El terreno total es: %.2f\n",aT);
    printf("ingrese el precio por metro cudrado:");
    
    scanf("%d", &metrocuadrado);
    pagototal=aT*metrocuadrado;
    pagoiva=(pagototal*iva);

    printf("El total a pagar es: %.0f\n",pagototal);
    printf("El total a pagar mas impuesto es: %.2f\n",pagoiva);
    

    return 0;






}