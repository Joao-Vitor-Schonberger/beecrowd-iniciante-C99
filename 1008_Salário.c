#include <stdio.h>
 
int main() {
 
    int func, horas;
    double val;
    
    scanf("%d", &func);
    scanf("%d", &horas);
    scanf("%lf", &val);
    
    double salary = horas * val;
    
    printf("NUMBER = %d\n", func);
    printf("SALARY = U$ %.2lf\n", salary);
    
    return 0;
}