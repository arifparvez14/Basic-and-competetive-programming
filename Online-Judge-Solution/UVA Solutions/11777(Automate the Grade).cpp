#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,t1,t2,f,attend,a,b,c,ct,sum;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=0;
        cin>>t1>>t2>>f>>attend>>a>>b>>c;
        if(a>=b && a>=c)
        {
            if(b>=c)
                ct=(a+b)/2;
            else
                ct=(a+c)/2;
        }
        else if(b>=c)
        {
            if(a>=c)
                ct=(b+a)/2;
            else
                ct=(b+c)/2;
        }
        else
        {
            if(b>=a)
                ct=(b+c)/2;
            else
                ct=(c+a)/2;
        }

        sum=t1+t2+f+attend+ct;

        if(sum>=90)
            printf("Case %ld: A\n",i);
        else if(sum>=80 && sum<90)
            printf("Case %ld: B\n",i);
        else if(sum>=70 && sum<80)
            printf("Case %ld: C\n",i);
        else if(sum>=60 && sum<70)
            printf("Case %ld: D\n",i);
        else
            printf("Case %ld: F\n",i);

     }
        return 0;
}
