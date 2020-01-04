#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
     for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
