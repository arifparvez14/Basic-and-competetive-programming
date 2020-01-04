#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,c=0,j,d;
    vector<int>v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);

    }
    for(i=0; i<n; i++)
    {
        if(v[i]==-1) continue;
        else
        {
            d=1;
            for(j=i+1; j<n; j++)
            {

                if(v[i]==v[j])
                {
                    d++;
                    v[j]=-1;
                }
            }
            c += d/2;
        }
        v[i]=-1;
    }
    cout<<c;
    return 0;
}
