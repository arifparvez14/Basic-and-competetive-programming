#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int x,y,i,k,l,m,u;
    while(cin>>x>>y)
    {
        m=10000,u=1;
        for(i=0; i<y; i++)
        {
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        /*for(i=0; i<y; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        for(i=1; i<y; i++)
        {
            if(v[i]==v[i-1])
                u++;
        }
        for(i=0; i<=(y-x); i++)
        {
            l=v[i+(x-1)]-v[i];
            if(l<=m)
                m=l;
            //cout<<v[i]<<" "<<v[i+(x-1)]<<" "<<m<<" "<<l<<" "<<u<<" "<<endl;
        }
        if(u==x)
            cout<<"0"<<endl;
        else
            cout<<m<<endl;
    }
    return 0;
}

