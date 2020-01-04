#include<stdio.h>
int main()
{
    char s1[100];
    double fixed,bonus,total;
    gets(s1);
    scanf("%lf",&fixed);
    scanf("%lf",&bonus);

    total=fixed+((bonus*15)/100);

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
