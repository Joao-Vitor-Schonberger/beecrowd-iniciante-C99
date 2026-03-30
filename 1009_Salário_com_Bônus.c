#include <stdio.h>
 
int main() {
 
    char nome;
    double fixo, total;
    
    scanf("%s", &nome);
    scanf("%lf", &fixo);
    scanf("%lf", &total);
    
    double salary = fixo + (total * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", salary);

    return 0;
}