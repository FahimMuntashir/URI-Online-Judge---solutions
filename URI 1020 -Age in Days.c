#include <stdio.h>
int main()
{
    int ageDays, years, months, days;
    scanf("%d", &ageDays);
    years = ageDays / 365;
    months = ageDays % 365 / 30;
    days = ageDays % 365 % 30;
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
}