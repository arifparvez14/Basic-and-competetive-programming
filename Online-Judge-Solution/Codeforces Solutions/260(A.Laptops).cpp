#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< pair <int,int> > v;
    int x,y,n,i,a=0,b=0,c=0,d=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        if(v[i].first < v[i].second)
        {
            a=v[i].first;
            b=v[i].second;
            break;
        }
    }
    if(a==0 && b==0)
    {
        cout<<"Poor Alex";
        c++;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(v[i].first > v[i].second)
            {
                if((v[i].first > a) and (v[i].second) < b)
                {
                    cout<<"Happy Alex";
                    c++;
                    break;
                }
            }
        }
    }
    if(c==0)
        cout<<"Poor Alex";
    return 0;
}
