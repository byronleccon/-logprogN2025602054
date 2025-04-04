#include <stdio.h>
#include <math.h>
 int main()
 {
    float IMC, peso, altura; 
    printf("Ingrese su peso en Kg:\n");
    scanf("%f",&peso);
    printf("Ingrese su altura en metros:\n");
    scanf("%f",&altura);
    IMC= peso/pow(altura,2);
        
        if(IMC <=18.4) {
            
            printf("Tiene bajo peso");
        
        }else if (IMC >18.5 && IMC <=24.9) {
            printf("Tiene un peso normal %.2f", IMC);
        
        } else if (IMC >=24.9 && IMC <=29.9) {
            printf("Tiene sobrepeso\n");
        
        }else if (IMC >=30.0 && IMC <=34.9){
            printf("Tiene obesidad clase 1\n");
        
        }else if(IMC >=35.0 && IMC <=39.9) {

            printf("Tiene obesidad clase 2\n");
        
        }else if(IMC >=40.0) {
            printf("Tiene obesidad clase 3 \n");
        }

            printf("Su IMC es de: %.2f\n",IMC);


    return 0;
 }