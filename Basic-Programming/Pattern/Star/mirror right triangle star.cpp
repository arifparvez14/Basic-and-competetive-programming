#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        for(j=N-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}









