#include<stdio.h>
int main()
{
    int NUMBER,HOUR;
    float AMOUNT,SALARY;

    scanf("%d",&NUMBER);
    scanf("%d",&HOUR);
    scanf("%f",&AMOUNT);

    SALARY=HOUR*AMOUNT;

    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;

}
