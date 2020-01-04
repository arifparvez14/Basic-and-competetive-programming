#include <stdio.h>
int main()
{
    long long int n,a[1001],temp,M,i,inner,outer;

    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%lld",&a[i]);
        M=0;

        for(outer=n-1; outer>0; outer--)
        {
            for(inner=0; inner<outer; inner++)
            {
                if(a[inner]>a[inner+1])
                {

                    temp=a[inner];
                    a[inner]=a[inner+1];
                    a[inner+1]=temp;
                    M++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",M);

    }
    return 0;
}
