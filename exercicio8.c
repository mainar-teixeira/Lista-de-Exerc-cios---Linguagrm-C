#include <stdio.h>

int main() {

    int idade = 17;
    const char *informar;

    informar = (idade >= 18) ? "Você é maior de idade" : "Você é menor";
    printf("%s", informar);

    return 0;
}