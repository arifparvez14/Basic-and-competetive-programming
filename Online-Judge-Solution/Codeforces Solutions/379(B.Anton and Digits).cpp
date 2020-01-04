#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10],k,i,l,ans=0;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    if(a[0]<=a[2] && a[0]<=a[3])
        k=a[0];
    else if(a[2]<=a[0] && a[2]<=a[3])
         k=a[2];
    else if(a[3]<=a[0] && a[3]<=a[2])
         k=a[3];

    if(a[0]<=a[1])
        l=a[0];
    else
        l=a[1];
    if(k!=0 && l!=0)
    {
        ans=ans+256*k;
        a[0]=a[0]-k;
        if(a[0]>=l)
        ans=ans+l*32;
        else if(a[0]<l)
        {
            if(a[0]>0)
                ans=ans+a[0]*32;
        }
    }
    else if(k==0 && l!=0)
    {
        ans=ans+l*32;
    }
    else if(k!=0 && l==0)
    {
        ans=ans+256*k;
    }
    cout<<ans;


    return 0;
}
