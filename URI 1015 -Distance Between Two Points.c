#include <stdio.h>
#include <math.h>
int main()
{
    double x1, x2, y1, y2, p1, p2, distance;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    p1 = x2 - x1;
    p2 = y2 - y1;
    distance = sqrt((p1 * p1) + (p2 * p2));
    printf("%.4lf\n", distance);
}
