#include <stdio.h>

int main() {

    char a = 'a',
    b = 'b';
    const char*message;

    message = (a != b) ? "São diferentes" : "São iguais";
    printf("%s", message);

    return 0;
}