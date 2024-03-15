#include <stdio.h>
#include <math.h>
#include "matematica.h"
int main() {
    float angulo_graus = 30.0;
    float angulo_radianos = angulo_graus * (M_PI / 180.0); // Convertendo para radianos usando M_PI

    printf("Seno de %.3f graus: %.3f\n", angulo_graus, calcular_seno(angulo_radianos));
    printf("Cosseno de %.3f graus: %.3f\n", angulo_graus, calcular_cosseno(angulo_radianos));
    printf("Tangente de %.3f graus: %.3f\n", angulo_graus, calcular_tangente(angulo_radianos));

    return 0;
}
