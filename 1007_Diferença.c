#include <stdio.h>
 
int main() {
 
    int a, b, c, d;
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    scanf("%d\n", &d);

    int diferenca = ( (a * b) - (c * d) );

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}