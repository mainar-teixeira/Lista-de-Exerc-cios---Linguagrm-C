#include <stdio.h>

int main() {

    int senha = 1234;
    const char*message;

    if (senha != 1234) {
        message = "Acesso negado";
    } else {
        message = "Acesso permitido";
    }

    printf("%s", message);

    return 0;
}