#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N,columns,spaces;
    cin>>N;
    columns=1;
    spaces=N-1;
    for(i=1;i<N*2;i++)
    {
        for(j=1;j<=spaces;j++)
            cout<<" ";

        for(j=1;j<columns*2;j++)
            cout<<"*";
        if(i<N)
        {

            columns++;
            spaces--;
        }
        else
        {
            columns--;
            spaces++;
        }
        cout<<endl;
    }
    return 0;
}



















