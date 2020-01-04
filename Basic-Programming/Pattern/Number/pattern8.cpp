#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if((i==1 && j==1) || (i==1 && j==N) ||(i==N && j==1)||(i==N && j==N)||(i%2==0 && j%2==0) ||((N/2)+1 ==i && (N/2)+1 ==j))
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}






