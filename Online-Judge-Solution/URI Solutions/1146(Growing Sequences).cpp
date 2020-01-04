#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,i,j;
    while(cin>>x)
    {
        if(x==0)
            break;
        for(i=1; i<=x;i++)
        {
            cout<<i;
            if(i<x)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
