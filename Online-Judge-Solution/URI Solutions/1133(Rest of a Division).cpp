#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m;
    while(cin>>n>>m)
    {
        if(n<=m)
        {
            for(i=n+1; i<=m-1; i++)
            {
                if(((i%5)==2) || ((i%5)==3))
                    cout<<i<<endl;
            }
        }
        else
        {
            for(i=m+1; i<=n-1; i++)
            {
                if(((i%5)==2) || ((i%5)==3))
                    cout<<i<<endl;
            }
        }
    }
    return 0;
}
