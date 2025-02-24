#include<stdio.h>
#include<stdlib.h>
/*
1-funcao main
2-informar os numeros e a operacao
3-funcao calcula
*/
void calcula(float numero1, float numero2, char operacao)
{   
        
       switch(operacao){
       case '+':
       printf("A soma dos valores é: %.2f", numero1 + numero2);
       break;
       case '-':
       printf("A subtracao dos valores é: %.2f", numero1 - numero2);
       break;
      case '*' :
       printf("A multiplicacao dos valores é: %.2f", numero1 * numero2);
       break;
       case '/' :
       printf("A divisao dos valores é: %.2f", numero1 / numero2);
       break;
       default:
       printf("operação invalida");
    
    }
}

int main (void)
{
       float num1, num2;
       char opr;

       printf ("digite um numero luiz:");
        scanf ("%f",&num1);

        printf("digite outro numero:");
        scanf("%f",&num2);
    
        printf("digite a operacao:'+', '-', '*', '/'");
        scanf("%s",&opr);
    
       calcula(num1,num2,opr);

}