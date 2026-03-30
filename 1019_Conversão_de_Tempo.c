#include <stdio.h>

int main() {
    int total_segundos;
    
    scanf("%d", &total_segundos);

    int minutos_totais = total_segundos / 60;
    int segundos_finais = total_segundos % 60;

    int horas = minutos_totais / 60;
    int minutos_finais = minutos_totais % 60;

    printf("%d:%d:%d\n", horas, minutos_finais, segundos_finais);

    return 0;
}