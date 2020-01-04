#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int i,n,k,max,min,maxp,minp,c,l;
    cin>>n;

    max=min=maxp=minp=c=0;
    for(i=0; i<n; i++)
    {
        cin>>k;
        v.push_back(k);
    }
    max=*max_element(v.begin(),v.end());
    min=*min_element(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        if(v[i]==max)
        {
            maxp=i;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(v[i]==min)
            minp=i;
    }


    if(max==v[0] && min==v[n-1])
    {
        cout<<c<<endl;
    }
    else if(max==v[0] && min!=v[n-1])
    {
        for(i=minp; i<(n-1); i++)
        {
            if(v[i]<v[i+1])
            {
                l=v[i+1];
                v[i+1]=v[i];
                v[i]=l;
                c++;
            }
        }
        cout<<c<<endl;
    }
    else if(max!=v[0] && min==v[n-1])
    {
        for(i=maxp; i>0; i--)
        {
            if(v[i]>v[i-1])
            {
                l=v[i-1];
                v[i-1]=v[i];
                v[i]=l;
                c++;
            }
        }
        cout<<c<<endl;
    }
    else if(max!=v[0] && min!=v[n-1])
    {
        for(i=maxp; i>0; i--)
        {
            if(v[i]>v[i-1])
            {
                l=v[i-1];
                v[i-1]=v[i];
                v[i]=l;
                c++;
            }
        }
        for(i=minp; i<(n-1); i++)
        {
            if(v[i]<v[i+1])
            {
                l=v[i+1];
                v[i+1]=v[i];
                v[i]=l;
                c++;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
