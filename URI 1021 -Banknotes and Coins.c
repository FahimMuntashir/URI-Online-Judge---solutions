#include<stdio.h>
int main()
{
    double n;
    scanf("%.2lf", &n);
    printf(" NOTAS:");
    printf("%lf nota(s) de R$ 100.00\n", n/100);
    n%=100;
     printf("%lf nota(s) de R$ 100.00\n", n/100);
    n%=100;
     printf("%lf nota(s) de R$ 100.00\n", n/100);
    n%=100;
     printf("%lf nota(s) de R$ 100.00\n", n/100);
    n%=100;
     printf("%lf nota(s) de R$ 100.00\n", n/100);
    n%=100;
     printf("%lf nota(s) de R$ 100.00\n", n/100);
    n%=100;

}