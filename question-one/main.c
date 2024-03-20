#include <stdio.h>

int main (void) {
    int idx = 13, soma = 0, k =0;
    while(k < idx) {
        k+= 1;
        soma += k;
    }
    printf("%d", soma);
    
    return 0;
}