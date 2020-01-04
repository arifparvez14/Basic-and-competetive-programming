#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=N;i>=1;i--)
    {
        for(j=N;j>=i;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}














