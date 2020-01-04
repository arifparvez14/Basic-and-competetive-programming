#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a,b;
    int i,aa=0,bb=0;
    for(i=0;i<=2;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<=2;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(i=0;i<=2;i++)
    {
        if(a[i]>b[i])
            aa++;
        else if(b[i]>a[i])
            bb++;
    }
    cout<<aa<<" "<<bb;
    return 0;
}
