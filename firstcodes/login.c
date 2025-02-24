#include <stdio.h>
#include <string.h>

#define MAX_LEN 30

int main() 
{
    char login[MAX_LEN], senha[MAX_LEN];
    char inputUser[MAX_LEN], inputPass[MAX_LEN];

    printf("Login desejado: ");
    fgets(login, MAX_LEN, stdin);
    login[strcspn(login, "\n")] = 0;

    printf("Atribua uma senha: ");
    fgets(senha, MAX_LEN, stdin);
    senha[strcspn(senha, "\n")] = 0; 

    printf("\nCadastro realizado com sucesso!\n\n");

    printf("Login: ");
    fgets(inputUser, MAX_LEN, stdin);
    inputUser[strcspn(inputUser, "\n")] = 0; 

    printf("Senha: ");
    fgets(inputPass, MAX_LEN, stdin);
    inputPass[strcspn(inputPass, "\n")] = 0;

    if (strcmp(login, inputUser) == 0 && strcmp(senha, inputPass) == 0) {
        printf("\nLogin bem-sucedido! Bem-vindo, %s.\n", login);
    } else {
        printf("\nErro: Nome ou senha esta incorreto!\n");
    }

    return 0;
}
