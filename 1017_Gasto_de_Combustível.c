#include <stdio.h>
 
int main() {
 
    int tempo, velocidade;
    
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    
    int distancia = velocidade * tempo;
    double litros = distancia / 12.0;

    printf("%.3lf\n", litros);

    return 0;
}