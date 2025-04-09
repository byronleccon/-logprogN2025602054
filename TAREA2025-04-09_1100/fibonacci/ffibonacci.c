#include <stdio.h>
int main() {
    int num1=1,num2=2,num3=2;
    int fib,limite;

    printf("Ingrese un limite para la sucesion\n");
    scanf("%d", &limite);

    for (fib = 1; fib <= limite; fib++) {

            num3=num1+num2;
            num1=num2;
            num2=num3;
            printf("%d,",num3);

//Me tarda en compilar.


    }
       return 0;
}