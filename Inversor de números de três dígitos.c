#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    unsigned int n;
    printf("Digite um numero de tres digitos:\n");
    scanf("%i", &n);
    unsigned int a, b, c;
    a=n/100;
    b=(n-100*a)/10;
    c=n-100*a-10*b;
    printf("O contrario desse numero e: %i%i%i", c, b, a);
    getch();
    return 0;
}

