#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,temp,n,a[100000],sum,dif,check,k,l,flag;
    while(cin>>n)
    {
        check=100000000,flag=0;
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cin>>sum;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if((a[i]+a[j]==sum) && (a[j]>=a[i]))
                {
                    dif=a[j]-a[i];
                    if(dif<=check)
                    {
                      check=dif;
                       k=a[i];
                       l=a[j];
                    }
                }
            }
        }

       printf("Peter should buy books whose prices are %lld and %lld.\n\n",k,l);
    }
    return 0;
}
