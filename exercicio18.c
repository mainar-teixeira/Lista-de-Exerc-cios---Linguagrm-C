#include <stdio.h>

int main() {

    int a = 5,
    b = 5,
    c = 0;
    const char *confirmar;

    if ( a < 1 || b < 1 || c < 1 || a + b <= c || a + c <= b || b + c <= a) {
        confirmar = "Não formam um triângulo";
    } else {
        confirmar = "Formam um triângulo";
    }
    
    printf("%s", confirmar);

    return 0;
}