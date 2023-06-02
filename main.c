#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    int jogarNovamente = 1;

    printf("Bem-vindo ao Jogo Pedra, Papel, Tesoura!\n");

    while (jogarNovamente) {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");

        printf("Opcao do jogador: ");
        scanf("%d", &jogador);

        srand(time(NULL));
        computador = rand() % 3 + 1;

        printf("Opcao do computador: %d\n", computador);

        if (jogador == computador) {
            printf("Empate!\n");
        } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
            printf("Jogador venceu!\n");
        } else {
            printf("Computador venceu!\n");
        }

        printf("\nDeseja jogar novamente? (1 - Sim, 0 - Nao): ");
        scanf("%d", &jogarNovamente);
    }

    printf("Obrigado por jogar!\n");

    return 0;
}
