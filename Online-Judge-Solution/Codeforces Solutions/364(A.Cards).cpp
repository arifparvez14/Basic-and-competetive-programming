#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,i,a[200],j,sum;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        sum=v[0]+v[n-1];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if((a[i]+a[j]==sum) && i!=j)
                {
                    a[i]=0,a[j]=0;
                    printf("%d %d\n",i+1,j+1);
                    break;
                }
            }
        }
    }
    return 0;
}





