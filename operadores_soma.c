#include<stdio.h>

main(){

    //operadores aritméticos - soma (+), subtração (-)
    //divisão (/) multiplicação (*) e modulo( %)
    //atenção a ordem de precedencia

    //escrever um algoritmo que realize uma soma de dois numeros e apresente o resultado

    //passo 1 - declarar variavies
    //passo 2 - recebe os dados
    //passo 3 - monta a operação de processamento (calculo)
    //passo 4 - apresenta a saída

    int numero1, numero2, soma;

    printf("Digite o primeiro numero \n");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero \n");
    scanf("%d",&numero2);


    soma = numero1 + numero2;

    printf("A soma e: %d", soma);

}