#include <stdio.h>

void proximoNumero(char questao) {
    switch (questao) {
        case 'a':
            printf("Lógica: A sequência está aumentando de 2 em 2.\n");
            printf("Próximo número: 9\n");
            break;
        case 'b':
            printf("Lógica: Cada número é o dobro do número anterior.\n");
            printf("Próximo número: 128\n");
            break;
        case 'c':
            printf("Lógica: Cada número é o quadrado do índice (começando em 0).\n");
            printf("Próximo número: 49\n");
            break;
        case 'd':
            printf("Lógica: Cada número é o quadrado de um número par.\n");
            printf("Próximo número: 100\n");
            break;
        case 'e':
            printf("Lógica: Esta é a sequência de Fibonacci, onde cada número é a soma dos dois números anteriores.\n");
            printf("Próximo número: 13\n");
            break;
        case 'f':
            printf("Lógica: A sequência parece estar aumentando em 2 ou 4, exceto nos últimos três números.\n");
            printf("Próximo número (considerando um aumento de 4): 23\n");
            break;
        default:
            printf("Questão inválida.\n");
    }
}

int main() {
    char questao;
    printf("Digite a questão (a, b, c, d, e, f): ");
    scanf("%c", &questao);

    proximoNumero(questao);

    return 0;
}
