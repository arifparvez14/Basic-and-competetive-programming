#include<stdio.h>
int GCD(int a,int b)
{
    int gcd,s;
    if(a==0) return a;
    else if(b==0) return b;
    else
    {
        while(b!=0)
        {
            s=b;
            b=a%b;
            a=s;
        }
        return a;
    }
}
int main()
{
    int i,j,N,G;
    while(scanf("%d",&N)==1 && N!=0)
    {
        G=0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}
