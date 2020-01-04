#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,b,i,unit,sum;
    while(cin>>n>>m>>a>>b)
    {
        sum=0;
        unit=b/m;
        //cout<<unit;
        if(unit<a)
        {
            for(i=m;i<n;i=i+m)
            {
                sum=sum+b;
            }
            sum=sum+ceil((n-(i-m))*unit);
        }
        else if(unit>=a)
        {
            sum=sum+n*a;
        }
    printf("%.0lf\n",sum);
    }

    return 0;
}

