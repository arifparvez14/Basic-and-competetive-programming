#include<bits/stdc++.h>
#define ll long long int
#define max 200009
using namespace std;
int main()
{
    ll i,n,sum,pum;
    char a[max];
    int b[max];
    while(cin>>n)
    {
        pum=1000000000;
        cin>>a;
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]=='R')
            {
                if(a[i+1]=='L')
                {
                    sum=(b[i+1]-b[i])/2;
                    if(sum<=pum)
                        pum=sum;
                }
                else
                    continue;
            }
            else
                continue;
        }
        if(pum==1000000000)
            cout<<"-1"<<endl;
        else
            cout<<pum<<endl;
    }
    return 0;
}
