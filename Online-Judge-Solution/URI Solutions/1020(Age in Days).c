#include<stdio.h>
int main()
{
    int n,year=0,month=0;

    scanf("%d",&n);

    year=n/365;
    n=n%365;

    month=n/30;
    n=n%30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",n);

    return 0;

}
