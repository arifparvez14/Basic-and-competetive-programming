#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        for(j=i;j<=N;j++)
        {
            if(i==1 || j==i || j==N)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}











