#include <stdio.h>

int main() {
    int v, i, c = 0, maiorIdade = 0;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &v);

    char vetNome[v][50], nomeMaisVelha[v][50];
    int vetIdade[v];

    for (i = 0; i < v; i++) {
        c++;
        printf("\n");
        printf("Dados da %da pessoa: \n", c);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(vetNome[i]);
        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
        if (maiorIdade < vetIdade[i]) {
            maiorIdade = vetIdade[i];
            strcpy(nomeMaisVelha[0], vetNome[i]);
        }
    }

    printf("\n");
    printf("PESSOA MAIS VELHA: %s (%d ANOS)\n", nomeMaisVelha[0], maiorIdade);

    return 0;
}
