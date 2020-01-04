#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a[100000],count;
    while(cin>>n)
    {
        count=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                count++;
        }
        if(n==1 && count==0)
            cout<<"YES"<<endl;
        else if(n==1 && count==1)
            cout<<"NO"<<endl;
        else if(n>1 && count==1)
            cout<<"YES"<<endl;
        else if(n>1 && count!=1)
            cout<<"NO"<<endl;
    }
    return 0;
}
