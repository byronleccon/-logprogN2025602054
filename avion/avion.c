#include <stdio.h>
#include <math.h>
  int main()
  {
    int L;
    L=2;
        float cuadA= L*L; 
        float cuadP= L*4;
          float T2A= (2*2/2);
          float T2h= sqrt (L*L+L*L);
        float T3A= (2*2/2);
        float T3h=sqrt (L*L+L*L);
          float T4A= (3.0/2.0*L)*L/2;
          float T4h= sqrt ((3.0/2.0*L)*(3.0/2.0*L)+ L+L);
        float RA= (1.0/4.0*L)*(2*L);
        float RP=2*((1.0/4.0*L)+4);
      float pt= T2h+T3h+T4h+L*5;
      float at= cuadA+T2A+T3A+T4A+RA;

    printf("el valor de pt es : %.2f\n", pt);
    printf("el valor de at es: %.2f\n", at);
    return 0;




  }