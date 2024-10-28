#include <stdio.h>

float calcularArea(float lado) {
    return 6 * lado * lado;
}

float calcularVolume(float lado) {
    return lado * lado * lado;
}

int main() {
    float lado;
    int opcao;
    printf("Digite o lado do cubo: ");
    scanf("%f", &lado);
    printf("Escolha (1 - Área, 2 - Volume): ");
    scanf("%d", &opcao);
    if (opcao == 1)
        printf("Área: %.2f\n", calcularArea(lado));
    else
        printf("Volume: %.2f\n", calcularVolume(lado));
    return 0;
}
