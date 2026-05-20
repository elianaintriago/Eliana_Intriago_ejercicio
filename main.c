#include <stdio.h>

float calcularPromedio(float [5]);

int main (int argc, char *argv[]) {
   float notas[5]={6.5 , 7.1 , 8 , 6 , 5};
    printf("promedio:%.2f\n",calcularPromedio(notas));
    return 0;
}

float calcularPromedio(float notas[5]){
      float suma=0;
     for (int i = 0; i < 5; i++) {
    printf("notas[%d]%.1f\n",i,notas[i]);
    suma+=notas[i];
   }
   float promedio=suma/5.0f;
}