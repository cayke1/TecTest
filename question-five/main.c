#include <stdio.h>
#include <string.h>

void invertString(char *str);

int main (void) {
    char string[100];
    printf("\n Digite uma string para inverter: ");
    scanf("%s", string);

    printf("\n String original: %s", string);
    invertString(string);
    printf("\n String invertida: %s", string);

    return 0;
}

void invertString(char *str) {
    int length = strlen(str);
    int i;
    char temp;

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}