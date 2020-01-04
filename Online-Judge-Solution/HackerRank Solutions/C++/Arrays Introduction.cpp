#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
