#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=1;i<N*2;i+=2)
    {
        for(j=i;j<N*2;j+=2)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


















