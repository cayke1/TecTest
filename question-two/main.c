#include <stdio.h>
#include <stdbool.h>

int fibonacci_seq(int n, int fib[]);
int check_fib(int num, int fib[], int length);
int main(void) {
    int num;
    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &num);

    int fib[100];
    int length = fibonacci_seq(num, fib);

    if(check_fib(num, fib, length))
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    else 
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
}

int fibonacci_seq(int n, int fib[]) {
    fib[0] = 0;
    fib[1] = 1;
    int i;
    for (i = 2; ; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        if (fib[i] > n)
            break;
    }
    return i;
}

int check_fib(int num, int fib[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        if (fib[i] == num)
            return true;
    }
    return false;
}