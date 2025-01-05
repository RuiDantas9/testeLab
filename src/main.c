#include <stdio.h>
#include <string.h>
#include "modulo_principal.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <opções>\n", argv[0]);
        printf("Use -ajuda para detalhes de uso.\n");
        return 1;
    }

    if (strcmp(argv[1], "-ajuda") == 0) {
        printf("Opções disponíveis:\n");
        printf("  -ajuda: Exibe esta mensagem.\n");
        printf("  -tab: Processar ficheiro separado por tabs.\n");
        printf("  -bin: Processar ficheiro binário.\n");
        return 0;
    }

    processar_entrada();  // Função do módulo principal
    return 0;
}
