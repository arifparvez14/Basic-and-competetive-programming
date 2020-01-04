#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,s;
    int i,j,n,k,c,l;
    cin>>n;
    c=0;
    for(i=0; i<n; i++)
    {
        cin>>k>>l;
        v.push_back(k);
        s.push_back(l);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j)
                continue;

            if(v[i]==s[j])
                c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
