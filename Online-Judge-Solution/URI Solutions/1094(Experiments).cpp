#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float c,r,s,sum,k;
    char x[0];
    while(cin>>n)
    {
        sum=c=r=s=0;
        for(i=1; i<=n; i++)
        {
            cin>>k;
            cin>>x[0];
            sum=sum+k;
            if(x[0]=='C')
                c=c+k;
            else if(x[0]=='R')
                r=r+k;
            else if(x[0]=='S')
                s=s+k;

        }
        printf("Total: %.0f cobaias\n",sum);
        printf("Total de coelhos: %.0f\n",c);
        printf("Total de ratos: %.0f\n",r);
        printf("Total de sapos: %.0f\n",s);
        printf("Percentual de coelhos: %.2f %\n",(c*100)/sum);
        printf("Percentual de ratos: %.2f %\n",(r*100)/sum);
        printf("Percentual de sapos: %.2f %\n",(s*100)/sum);

    }
    return 0;
}
