#include <stdio.h>

int main() {

    int nmr1 = 9,
    nmr2 = 5;

    if (nmr1 % nmr2 == 0) {
        printf("%d é múltiplo de %d", nmr1, nmr2);
    } else {
        printf("%d não é múltiplo de %d", nmr1, nmr2);
    }

    return 0;
}