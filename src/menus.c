#include <stdio.h>
#include "menus.h"
#include "utils.h"

void exibirMenuPrincipal() {
    int opcao;
    do {
        printf("\n=== Menu Principal ===\n");
        printf("1. Carregar dados dos funcionários\n");
        printf("2. Carregar ementas\n");
        printf("3. Carregar escolhas dos utentes\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                carregarFuncionarios("data/funcionarios.txt");
            break;
            case 2:
                carregarEmentas("data/ementas.txt");
            break;
            case 3:
                carregarEscolhas("data/escolhas.txt");
            break;
            case 4:
                printf("Saindo...\n");
            break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
}
