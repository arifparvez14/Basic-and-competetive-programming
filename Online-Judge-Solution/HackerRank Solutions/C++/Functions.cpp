#include<bits/stdc++.h>
using namespace std;
int maxFunction(int a,int b,int c,int d)
{
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    return v[3];
}
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=maxFunction(a,b,c,d);
    cout<<e;
    return 0;
}
