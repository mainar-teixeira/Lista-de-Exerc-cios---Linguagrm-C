#include <stdio.h>
#include <stdlib.h>


int main() {
    system("chcp 65001 > nul"); // Apenas para resolver um problema no  resultado do terminal do VS Code;
    
    int i, chooseOP, chooseQuant;
    char produtos[4][60] = {
        "Açai com Banana 300ml (R$ 9,90)",
        "Açai com Banana 500ml (R$ 14,90)",
        "Açai com Cupuaçu 300ml (R$ 11,90)",
        "Açai com Cupuaçu 500ml (R$ 16,90)",
    };
    float precos[4] = {9.9, 14.9, 11.9, 16.9},
    buyAB3 = 0, buyAB5 = 0, buyAC3 = 0, buyAC5 = 0,
    arrayBuy[4] = { buyAB3, buyAB5, buyAC3, buyAC5};
    int quantAB3 = 0, quantAB5 = 0, quantAC3 = 0, quantAC5 = 0,
    arrayQuant[4] = { quantAB3, quantAB5, quantAC3, quantAC5}; 

    float total = 0;
    
    while (1) {
        for (i = 0; i < 4;i++) {
            

            if (i == 0) {
                printf("\n\n%d - %s\n", i + 1, produtos[i]);
            } else {
                printf("%d - %s\n", i + 1, produtos[i]);
            }
            
        }
        
        printf("Escolha a opção: ");
        scanf("%d", &chooseOP);
        
        if (chooseOP > 0 && chooseOP < 5) {
            printf("Escolha a quantidade: ");
            scanf("%d", &chooseQuant);
        }
        
        if (chooseOP == 0) {
            printf("\n\n - EXTRATO -\n|Nº|     NOMES     |   QUANTIDADE   | T.P PRODUTOS |\n");
            for (i = 0;i < 4;i++) {
                printf("%d - %s - %d - R$%.2f\n", i + 1, produtos[i], arrayQuant[i], arrayBuy[i]);
            }
            printf("VALOR TOTAL: R$%.2f", total);
            break;
        } else if (chooseOP == 1) {
            buyAB3 += precos[0] * chooseQuant;
            arrayBuy[0] += precos[0] * chooseQuant;
            arrayQuant[0] += chooseQuant;
            total += precos[0] * chooseQuant;
        } else if (chooseOP == 2) {
            buyAB5 += precos[1] * chooseQuant;
            arrayBuy[1] += precos[1] * chooseQuant;
            arrayQuant[1] += chooseQuant;
            total += precos[1] * chooseQuant;
        } else if (chooseOP == 3) {
            buyAC3 += precos[2] * chooseQuant;
            arrayBuy[2] += precos[2] * chooseQuant;
            arrayQuant[2] += chooseQuant;
            total += precos[2] * chooseQuant;
        } else if (chooseOP == 4) {
            buyAC5 += precos[3] * chooseQuant;
            arrayBuy[3] += precos[3] * chooseQuant;
            arrayQuant[3] += chooseQuant;
            total += precos[3] * chooseQuant;
        } else {
            printf("Opção Inválida");
        }
        
    }

    printf("\n\nVocê saiu!\n\n");

    return 0;
}
