#include <stdio.h>
int main()
{
    int time, avgSpeed;
    float fuel;
    scanf("%d %d ", &time, &avgSpeed);
    fuel = ((time * avgSpeed) / 12.0);
    printf("%.3f\n", fuel);
    return 0;
}

