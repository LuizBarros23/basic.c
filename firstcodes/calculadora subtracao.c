#include<stdio.h>
#include<stdlib.h>

int main (void)
{
     //declaração de variaveis
    int n = 23;
    float n2 = 2.947;
    char letra = 'l';
    char frase[20] = "teste";
    double n3 = 2.30905;
    int valor1, valor2, subtracao;

    printf("Inicio");

    printf("valores: %d %f %c %s %f \n", n,n2,letra,frase,n3 );

    printf ("digite um numero inteiro:");
    scanf ("%d",&valor1);

    printf("digite outro numero inteiro:");
    scanf("%d",&valor2);
    subtracao = valor1 - valor2;
    printf("valor da subtracao de %d - %d = %d", valor1,valor2,subtracao);
    system("pause");
    return 0;
}