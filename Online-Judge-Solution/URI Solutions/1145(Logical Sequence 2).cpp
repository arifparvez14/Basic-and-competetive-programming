#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,i,j;
    while(cin>>x>>y)
    {
        for(i=1; i<=y; i=i+x)
        {
            for(j=0; j<x; j++)
            {
                cout<<i+j;
                    if(j<(x-1))
                        cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
