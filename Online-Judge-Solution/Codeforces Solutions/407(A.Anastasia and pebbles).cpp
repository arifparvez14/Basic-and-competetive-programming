#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,n,k,x,b,a[100000],count,mod,rem;
    //float count,mod,rem;
    while(cin>>n>>k)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<k)
            {
                count++;
            }
            else if(a[i]>=k)
            {
                mod=a[i]/k;
                rem=a[i]%k;
                if(rem>0)
                {
                    count=count+mod+1;
                }
                else
                    count=count+mod;
            }
        }
        if((count%2)==0)
            printf("%d\n",count/2);
        else
            printf("%d\n",(count/2)+1);
    }
    return 0;
}
