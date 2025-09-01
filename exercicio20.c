#include <stdio.h>

int main() {

    float Vkm = 180,
    seg = Vkm/3600,
    converter = seg * 1000;
    
    printf("A velocidade em m/s é: %.1f", converter);

    return 0;
}