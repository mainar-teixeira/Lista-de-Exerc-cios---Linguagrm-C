#include <stdio.h>
#include <string.h>

int main() {
    char filmsList[11][30] = {
        "Sair",
        "O Dilema das Redes",
        "Privacidade Hackeada",
        "Snowden",
        "Rede Social",
        "Matrix",
        "O Jogo da Imiracao",
        "Enigma",
        "Codigo para o inferno",
        "A Teoria de Tudo",
        "AI - Inteligencia Artificial"
    }, assistidos[11][30];
    int i, escolher, filmsEscolhidos = 0, seeList;

    while (1) {
        for (i = 0; i < 11;i++) {
            printf("%d - %s\n", i, filmsList[i]);
        }
        printf("\n\nQual filme deseja assistir?");
        scanf("%d", &escolher);

        if (escolher == 0) {
            printf("Voce escolheu sair!\n\nDeseja ver lista de filmes assistidos?\n1 - SIM\n\n");
            scanf("%d", &seeList);

            if (seeList == 1) {
                printf("\n\nLISTA DE ASSISTIDOS\n\n");
                if (filmsEscolhidos == 0) {
                    printf("== VAZIO ==");
                    break;
                   } else {
                     for (i = 0; i < filmsEscolhidos;i++) {
                        printf("%d - %s\n", i + 1, assistidos[i]);
                    };
                    break;
                }
            } else {
                break;
            }
                
        } else if (escolher > 0 && escolher < 11) {
            strcpy(assistidos[filmsEscolhidos], filmsList[escolher]);
            filmsEscolhidos++;
        } else {
            return main();
        }
    }

    printf("\n\nEncerrado...");

    return 0;
}