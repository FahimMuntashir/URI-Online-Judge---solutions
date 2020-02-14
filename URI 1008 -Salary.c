#include <stdio.h>
int main()
{
    int A, B;
    float C, D;
    scanf("%d %d %f", &A, &B, &C);
    D = B * C;
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2f\n", D);
    return 0;
}