#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        sum += v[i];
    }
    cout<<sum;
    return 0;
}
