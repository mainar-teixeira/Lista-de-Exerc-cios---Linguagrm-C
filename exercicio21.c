#include <stdio.h>

int main() {

    int nota = 6;
    const char*message;

    message = (nota >= 6) ? "Aprovado" : "Reprovado";
    printf("%s", message);

    return 0;
}