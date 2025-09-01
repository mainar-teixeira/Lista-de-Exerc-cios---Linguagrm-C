#include <stdio.h>

int main() {

    int nmr = 1;
    const char*message;

    if (nmr == 0) {
        message = "É 0";
    } else {
        message = (nmr < 0) ? "O número é negativo" : "O número é positivo";
    }

    printf("%s", message);

    return 0;
}