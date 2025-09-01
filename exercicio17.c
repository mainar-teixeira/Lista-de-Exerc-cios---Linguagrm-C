#include <stdio.h>

int main() {

    int n1 = 8,
    n2 = 5,
    n3 = 2;

    if (n1 > n2 && n1 > n3) {
        printf("O maior é: %d", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("O maior é: %d", n2);
    } else {
        printf("O maior é: %d", n3);
    }

    return 0;
}