#include <stdio.h>

int main() {

    float peso = 53;
    int verificar;
    const char*message;
    
    verificar = (peso < 35.5 || peso > 52.7) ? 1 : 0 ;
    message = (peso < 35.5 || peso > 52.7) ? "true" : "false" ;
    
    printf("Peso: %.2f\n%s: %d", peso, message, verificar);

    return 0;
}

// Algoritmo 5 - Escreva um programa em C que verifique se o peso é menor doque 35.5 ou maior do que 52.7 quilos, e imprima no console 0 para false e 1para true. É obrigatório o uso da variável do tipo float. É obrigatório o uso dooperador II (Ou Lófico - pipe pipe). Os valores não devem ser lidos doconsole, e devem ser definidos a criação das variáveis.