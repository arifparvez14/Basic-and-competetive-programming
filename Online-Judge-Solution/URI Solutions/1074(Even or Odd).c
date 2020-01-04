#include<stdio.h>
int main()
{
    long long int n,i,a[100000];
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>0 && a[i]%2==0)
            printf("EVEN POSITIVE\n");

        if(a[i]>0 && a[i]%2!=0)
            printf("ODD POSITIVE\n");

        if(a[i]<0 && a[i]%2==0)
            printf("EVEN NEGATIVE\n");

        if(a[i]<0 && a[i]%2!=0)
            printf("ODD NEGATIVE\n");

        if(a[i]==0 )
            printf("NULL\n");

    }
    return 0;
}
