#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N,k=1;
    cin>>N;

    for(i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            for(j=2; j<=(i*2); j+=2)
                cout<<j;
        }
        else
        {
            for(j=1; j<=(i*2); j+=2)
                cout<<j;
        }
        cout<<endl;
    }
    return 0;
}




















