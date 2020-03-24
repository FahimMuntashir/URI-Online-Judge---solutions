#include <stdio.h>

int main()

{
    double n,s;
    scanf("%lf", &n);
    if (n >= 0 && n <= 2000)
    {
        printf("Isento\n");
    }
    else if (n > 2000.01 && n <= 3000)
    {
        n -= 2000;
        s = n * .08;
        printf("R$ %.2lf\n", s);
    }
    else if (n >= 3000.01 && n <= 4500)
    {
        n -= 3000;
        s = n * .18 + 80;
        printf("R$ %.2lf\n", s);
    }
    else
    {
        n -= 4500;
        s = n * .28 + 350;
        printf("R$ %.2lf\n", s);
    }
    return 0;
}