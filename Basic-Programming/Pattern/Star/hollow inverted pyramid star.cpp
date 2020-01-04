#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    for(i=N; i>=1; i--)
    {
        for(j=N;j>i;j--)
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
















