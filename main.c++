#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
     float valor, valor2, result;
    int elevar = 0;
    char escolha;


    printf("Bem vindo a Calculadora!\n");
    printf("Feito por Felipe de Paula\n\n");
    printf("Escolha um valor para dividir, somar, subtrair, multiplicar, ou elevar ao quadrado: ");
    scanf("%f", &valor);
    printf("Escolha uma operacao matematica: multiplicar(x), Divisao(/), soma(+), Subtracao(-), Elevar a outro numero(e): ");
    scanf(" %c", &escolha);

    system("cls");

    if (escolha == 'e'){
        printf("Escolha um valor para elevar o primeiro numero: ");
        scanf("%d", &elevar);
        result = pow(valor,elevar);
        printf("\nO resultado da operacao %c e %.2f\n\n", escolha, result);
        printf("\nObrigado por utilizar minha calculadora|");
    }


    else{
    printf("Escolha um valor para dividir, somar, subtrair ou multiplicar o valor escolhido: ");
    scanf("%f", &valor2);

    switch (escolha){
    case 'x':
    result = valor * valor2;
    break;
    case '/':
    result = valor / valor2;
    break;
    case '+':
    result = valor + valor2;
    break;
    case '-':
    result = valor - valor2;
    break;
    default:
    printf("opera��o invalida");
    break;
    }
    printf("\nO resultado da operacao %c e %.2f\n\n", escolha, result);
    printf("\nObrigado por utilizar minha calculadora\n\n");
    system("pause");
    }
    return 0;
}