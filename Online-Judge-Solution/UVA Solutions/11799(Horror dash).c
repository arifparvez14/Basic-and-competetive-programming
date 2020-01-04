#include<stdio.h>
int main()
{
    long long int i,a,b,j,c[100],outer,inner,temp;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld",&b);
        for(j=0;j<b;j++){
            scanf("%lld",&c[j]);}

        for(outer=b-1;outer>0;outer--){
                for(inner=0;inner<outer;inner++){
                    if(c[inner]>c[inner+1])
                    {
                        temp=c[inner];
                        c[inner]=c[inner+1];
                        c[inner+1]=temp;
                    }
                }
        }
        printf("Case %lld: %lld\n",i+1,c[b-1]);

    }
    return 0;
}


