#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        for(j=N;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
















