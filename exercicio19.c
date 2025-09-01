#include <stdio.h>

int main() {

    float preco = 200,
    pct = preco / 100,
    desconto = pct * 90;
    
    printf("%.2f", desconto);



    return 0;
}