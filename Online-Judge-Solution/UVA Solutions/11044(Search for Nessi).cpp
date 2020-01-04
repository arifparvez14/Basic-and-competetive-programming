#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,x,y,res;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        res=(x/3)*(y/3);
        cout<<res<<endl;

    }
    return 0;
}
