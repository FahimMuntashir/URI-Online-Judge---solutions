#include <stdio.h>
int main()
{
    int product1_num, priduct1_code, product2_num, product2_code;
    float product1_price, product2_price, product1_paid, product2_paid, allPaid;

    scanf("%d %d %f", &priduct1_code, &product1_num, &product1_price);
    scanf("%d %d %f", &product2_code, &product2_num, &product2_price);

    product1_paid = product1_price * product1_num;
    product2_paid = product2_price * product2_num;

    allPaid = product1_paid + product2_paid;

    printf("VALOR A PAGAR: R$ %.2f\n", allPaid);
    return 0;
}
