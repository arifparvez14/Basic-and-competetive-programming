#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    while(cin>>m>>n)
    {
        if(m==2)
            x=n;
        else if(n==2)
            x=m;
        else if(m==1)
            x=n/2;
        else if(n==1)
            x=m/2;
        else
            x=(m*n)/2;

        cout<<x<<endl;
    }
    return 0;
}
