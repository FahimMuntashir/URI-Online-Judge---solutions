#include <stdio.h>
int main()
{

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A < B + C && B < A + C && C < B + C)
    {
        printf("Perimetro = %.1lf\n", A + B + C);
    }
    else
        printf("Area = %.1lf\n", ((A + B) * C) / 2);
    return 0;
}
