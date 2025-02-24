#include <stdio.h>

int main() 
{
    char str[] = "Olá, mundo!";
    int i = 0;

    printf("Caracteres da string:\n");

    while (str[i] != '\0') {
        printf("str[%d] = %c\n", i, str[i]);
        i++;
    }

    return 0;
}
