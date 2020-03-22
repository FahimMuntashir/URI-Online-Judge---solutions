#include <stdio.h>

int main()
{
    int intitial_hour, intitial_min, final_hour, final_min, duration_hour, duration_min;
    scanf("%d %d %d %d", &intitial_hour, &intitial_min, &final_hour, &final_min);

    duration_hour = final_hour - intitial_hour;
    if (duration_hour < 0)
    {
        duration_hour = 24 + (final_hour - intitial_hour);
    }

    duration_min = final_min - intitial_min;
    if (duration_min < 0)
    {
        duration_min = 60 + (final_min - intitial_min);
        duration_hour--;
    }
    if (intitial_hour == final_hour && intitial_min == final_min)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
    }
    return 0;
}