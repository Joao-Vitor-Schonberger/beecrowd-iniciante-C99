#include <stdio.h>
 
int main() {
 
    int distancia;
    double combustivel;
    
    scanf("%d", &distancia);
    scanf("%lf", &combustivel);
    
    double autonomia = distancia/combustivel;
    
    printf("%.3lf km/l\n", autonomia);

    return 0;
}