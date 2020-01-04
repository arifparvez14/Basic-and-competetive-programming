#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[100000],count;
    while(cin>>n)
    {
        count=0;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                count++;

        }
        if(count==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
