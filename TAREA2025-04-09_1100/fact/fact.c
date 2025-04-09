#include <stdio.h>
int main() {
     
    int num, fact;
    
    printf("Ingrese un numero entero para conocer su factorial !\n");
        scanf("%d", &num);
        fact=num;
        num=num-1;
        
        do { 
            printf("%num*");
            fact=fact*num;
            num=num-1;
            
        }
        while (num >=1); 
        
        printf("El factorial es: %d", fact);
        


   return 0;
}