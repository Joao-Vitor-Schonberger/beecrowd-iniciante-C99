#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, c, maiorAB, maiorGeral;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;

    maiorGeral = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorGeral);

    return 0;
}