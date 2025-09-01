#include <stdio.h>

int main() {

    int ano = 2025;
    const char*message;

    message = (ano % 4 == 0) ? "Ano bissexto" : "Ano comum";
    printf("%s", message);
    

    return 0;
}