#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Ingrese primer numero\n");
    scanf("%d", &a);
    printf("Ingrese segundo numero\n");
    scanf("%d", &b);

    c=a+b;
    printf("La suma de %d y %d es %d", a, b, c);

    return EXIT_SUCCESS;
}
