#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,m,i,x,sum=0;
    vector<long long int> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<m;i++)
    {
        if(v[i]<0)
         sum -= v[i];
    }
    cout<<sum;
    return 0;
}
