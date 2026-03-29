#include <stdio.h>

int main() {

    char vendedor;
    double salario, total_vendas, comissao, total_salario;
    
    comissao = total_vendas * 0.15;
    total_salario = comissao + salario;

    printf("%f", total_salario);

    return 0;
}