#include <stdio.h>

int main() {

    char letra = 'b';
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int i;
    int verificar = 0;
    const char *message;

    for (i = 0; i < 5;i++) {
        if (letra == vogais[i]) {
            verificar = 1;
            break;
        }
    } 

     message = (verificar) ? "É uma vogal" : "É uma consoante";
    printf("%s", message);

    return 0;
}