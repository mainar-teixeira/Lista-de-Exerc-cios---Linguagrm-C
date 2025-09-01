#include <stdio.h>

int main() {

    float salario = 1000,
    aumento = (0.15 * salario) + salario;
    

    printf("Novo salário: %.2f", aumento);

    return 0;
}