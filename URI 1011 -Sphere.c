#include <stdio.h>
int main()
{
    double R, pi, sphere;
    scanf("%lf", &R);

    pi = 3.14159;
    sphere = 4.0 / 3 * pi * R * R * R;
    printf("VOLUME = %.3lf\n", sphere);
    return 0;
}
