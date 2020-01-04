#include<stdio.h>
int main()
{
    long long int n,m=0;
    while(scanf("%lld",&n)==1 && n!=0)
    {

        if(n>=101){
            m=n-10;
            printf("f91(%lld) = %lld\n",n,m);
        }
        else
            printf("f91(%lld) = 91\n",n);

    }
    return 0;
}
