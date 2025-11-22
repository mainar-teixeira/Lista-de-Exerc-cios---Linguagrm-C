#include <stdio.h>

void imc(float massa, float altura, float calIMC, char message[40]) {

    calIMC = massa / (altura * altura);

    if (calIMC < 18.5) {
        message = "baixo peso";
    } else if (calIMC > 18.5 && calIMC <= 24.9) {
        message = "Normal";
    } else if (calIMC >= 25 && calIMC <= 29.9) {
        message = "sobrepeso";
    } else if (calIMC >= 30 && calIMC <= 34.9) {
        message = "obesidade grau I";
    } else if (calIMC >= 35 && calIMC <= 39.9) {
        message = "obesidade grau II";
    } else if (calIMC >= 40) {
        message = "obesidade grau III";
    } else {
        printf("valores inválidos");
    }

    printf("\n\nSEU IMC: %.1f - %s", calIMC, message);
}

int main() {

    float altura, peso, calculo;
    char mensagem[40];

    printf("Digite o peso e a altura separados por espaço:\n");
    scanf("%f %f", &peso, &altura);

    imc(peso, altura, calculo, mensagem);

    

    return 0;
}