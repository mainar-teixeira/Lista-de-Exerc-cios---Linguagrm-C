#include <stdio.h>

int main() {

    int n;

    printf("Informe N: ");
    scanf("%d", &n);
    
    printf("Números pares entre 0 e N são:\n");
    
    if (n % 2 != 0) {
        for (int i = 0; i < n;i += 2) {
            if (i == 0) {
                printf("%d", i);
             } else {
                printf(" - %d", i);
            }
        } 
    } else {
        for (int i = 0; i <= n;i += 2) {
            if (i == 0) {
                printf("%d", i);
            } else {
                printf(" - %d", i);
            }
    }

    }
    

    return 0;
}
