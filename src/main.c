#include <stdio.h>
#include "menus.h"

int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "-ajuda") == 0) {
            printf("Uso do programa:\n");
            printf("./meu_programa [-ajuda] [-tab] [-bin]\n");
            return 0;
        }
    }

    // Chama o menu principal
    exibirMenuPrincipal();

    return 0;
}
