#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        for(j=i;j<N;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1)|| i==N)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}














