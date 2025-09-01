#include <stdio.h>

int main() {

    int nmr1 = 5, nmr2 = 2;
    const char *maior;

    if (nmr1 > nmr2) {
        maior = "O maior numero e";
        printf("%s %d", maior, nmr1);
    } else if (nmr2 > nmr1) {
        maior = "O maior numero e";
        printf("%s %d", maior, nmr2);
    } else {
        maior = "Sao iguais";
        printf("%s", maior);
    }

    return 0;
}