#include <stdio.h>

int main()
{
    int X, Y;
    float a, b, c, d, e;
    a = 4.00;
    b = 4.50;
    c = 5.00;
    d = 2.00;
    e = 1.50;
    scanf("%d %d", &X, &Y);
    if (X == 1)
    {
        printf("Total: R$ %.2lf\n", Y * a);
    }
    else if (X == 2)
    {
        printf("Total: R$ %.2lf\n", Y * b);
    }
    else if (X == 3)
    {
        printf("Total: R$ %.2lf\n", Y * c);
    }
    else if (X == 4)
    {
        printf("Total: R$ %.2lf\n", Y * d);
    }
    else
    {
        printf("Total: R$ %.2lf\n", Y * e);
    }
    return 0;
}
