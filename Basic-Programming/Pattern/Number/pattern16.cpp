#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        for(j=i;j<=N;j++)
        {
            cout<<j;
        }
        for(j=i;j>1;j--)
        {
            cout<<j-1;
        }
        cout<<endl;
    }
    return 0;
}











