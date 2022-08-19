#include <stdio.h>

float soma (float a, float b) {
    return a+b;
}
//não é uma boa prática: cada função deve executar uma unica tarefa
void subtracao (float a, float b) {
    printf("subtracao = %f\n", a-b);
}

float multiplicacao (float a, float b){
    return a*b;
}

float divisao (float a, float b){
    return a/b;
}