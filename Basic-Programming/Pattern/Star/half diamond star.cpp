#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N,columns;
    cin>>N;
    columns=1;
    for(i=1;i<N*2;i++)
    {
        for(j=1;j<=columns;j++)
        {
            cout<<"*";
        }
        if(i<N)
        {
            columns++;
        }
        else
        {
            columns--;
        }
        cout<<endl;
    }
    return 0;
}

















