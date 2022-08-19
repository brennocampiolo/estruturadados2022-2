#include <stdio.h>
float soma (float, float);
float subtracao (float, float);
float multiplicacao (float, float);
float divisao (float, float);

int main () {
    float num1, num2, resultado;
    char operacao;
    printf("Digite o primeiro valor: ");
    scanf("%f",&num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    do{
       printf("Escolhe a operacao (+ - * /): ");
       scanf("%c", &operacao);
    }while (operacao != "+" && operacao != "-" && operacao != "*" && operacao != "/");
    switch (operacao){
        case '+';
            resultado = soma(num1, num2);
            printf("soma = %f\n", resultado);   
           break;
        case '-';
            printf("subtracao = %f\n", subtracao(num1, num2));
            break;
        case '*';
            print("multiplicacao = %f\n", multiplicacao(num1, num2));
            break;
        case '/';
            if (num2 == 0){
                printf("Não existe divisão por zero!\n");
            }
             else{
                printf("divisao = %f\n", divisao(num1, num2));
             }
            break;
    }
    return 0;
}

float soma (float a, float b) {
    return a + b;
}
float subtracao (float a, float b) {
    return a - b; 
}

float multiplicacao (float a, float b){
    return a * b;
}

float divisao (float a, float b){
    return a/b;
}

//um programa que lê 2 números e um operador, realiza a operação e devolve o resultado