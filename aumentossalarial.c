#include <stdio.h>
int main(){
    float salario_inicial, salario_novo;
    int ano = 10;
    float aumento = 10.0/100.0;

    printf("digite o salario inicial: ");
    scanf("%f",&salario_inicial);

    salario_novo = salario_inicial;

    for (int i = 0; i < ano; i++){
        salario_novo += salario_novo * aumento;
    }
    printf("O salario com o aumento apos %d anos e: %.2f\n",ano,salario_novo);

    return 0;
    
}