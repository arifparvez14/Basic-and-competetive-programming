#include<stdio.h>
int main()
{
    int i,n,e,f,l,sum,s,s1,r,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=0;
       scanf("%d %d %d",&e,&f,&l);
       s=e+f;
       while(s>=l)
       {
           s1=s/l;
           r=s%l;
           s=s1+r;
           sum=sum+s1;
       }
       printf("%d\n",sum);
    }
    return 0;
}
