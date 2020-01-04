#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}


















