#include<stdio.h>
int main()
{
    int n,m,k,result,sum,rem,total;
    while(scanf("%d %d",&n,&m)==2 ){
        k=n;
        sum=0;
        total=0;
        while(k>=m){
            result=k/m;
            rem=k%m;
            sum=sum+result;

            k=result+rem;
        }
        total=sum+n;

        printf("%d\n",total);

    }
    return 0;
}

