#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,count;
    while(cin>>n>>m)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            count=count+((i+m)/5)-(i/5);
        }
        cout<<count<<endl;
    }
    return 0;
}
