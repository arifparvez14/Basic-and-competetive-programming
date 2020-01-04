#include<stdio.h>
int main()
{
    int n,result,sum,rem;
    while(scanf("%d",&n)==1 && n!=0){
        sum=0;
        while(n>=3){
            result=n/3;
            rem=n%3;
            sum=sum+result;

            n=result+rem;
        }
        if(n==2)
            sum=sum+1;

        printf("%d\n",sum);

    }
    return 0;
}

