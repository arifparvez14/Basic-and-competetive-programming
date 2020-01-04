#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x,y,a[1000],b[1000],l=0,i,c=0,k;
    cin>>n;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>a[i];
    }
    cin>>y;
    for(i=0; i<y; i++)
    {
        cin>>b[i];
    }
    for(i=x; i<(x+y); i++)
    {
        a[i]=b[l];
        l++;
    }
    for(k=1; k<=n; k++)
    {
        for(i=0; i<(x+y); i++)
        {
            if(a[i]==k)
            {
                c++;
                break;
            }
        }
    }
    if(n==c)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}






