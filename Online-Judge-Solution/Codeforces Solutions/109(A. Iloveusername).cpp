#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],i,n,g,l,c;
    while(cin>>n)
    {
        c=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0]>=a[1])
        {
            g=a[0];
            l=a[1];
        }
        else
        {
            g=a[1];
            l=a[0];
        }
        c++;
        for(i=2; i<n; i++)
        {
            if(a[i]>g)
            {
                c++;
                g=a[i];
            }
            else if(a[i]<l)
            {
                c++;
                l=a[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
