#include <stdio.h> 

int main() {

    int verificar = 5;
    const char *parOuImpar;

    parOuImpar = (verificar % 2 == 0) ? "O número é par" : "O número é impar";
    printf("%s", parOuImpar);


    return 0;
}