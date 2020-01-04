#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110],b[110],c[110],i,n,k,l,j;
    while(cin>>n)
    {
        l=0;
        for(i=0; i<n; i++)
        {
            cin>>k;
            a[i]=k;
            b[i]=k;
        }
        sort(b,b+n);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(b[i]==a[j])
                {
                    c[l]=j;
                    l++;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<c[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
