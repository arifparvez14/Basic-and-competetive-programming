#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N,k=1;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==N || j==1 || j==i)
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}




















