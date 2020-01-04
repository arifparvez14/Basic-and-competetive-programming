#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,k=0,c=0;
    cin>>n>>m;
    if(n<m)
    {
        cout<<n;
    }
    else if( n==m)
    {
        cout<<n+1;
    }
    else if(n>m)
    {
        i=1;
        while(1)
        {
           if(i%m==0)
                c++;
            else
                k++;
            if(k==n)
            {
                cout<<k+c;
                break;
            }
            i++;
        }
    }
    return 0;
}
