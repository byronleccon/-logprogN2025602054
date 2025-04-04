#include <stdio.h>
int main () 
{   
    int opcion,pizza;
    char extra[30];
    printf("Bienvenido a la pizzeria Bella Napoli\n");
    printf("Quiere su pizza vegetariana?\n si=1\n no=2:\n");
    scanf("%d",&opcion);
    
    if (opcion == 1) {
        printf("La pizza vegetariana contiene Pimiento y Tofu\n");
        printf("Desea agregar otro ingrediente?\n Pimiento o Tofu\n");
        scanf("%s", extra);
        
        printf("Su pizza fue preparada, es vegetariana y contiene:\n");
        printf("Mozzarella, Tomate y %s", extra);





    } else if(opcion==2) {
        printf("Ha elegido la pizza no vegetariana\n Desea agregar otro ingrediente?\n  Peperoni\n  Jamon\n  Salmon:\n");
        scanf("%s", extra);
        printf("Su pizza fue preparada, no es vegetariana y contiene:\n");
        printf("Mozzarella, Tomate y %s", extra);


        
    } else  { 
        printf("Opcion invalida\n");
        return 0;
    }
    
    
    









    return 0;
}