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
            if(k%2==1)
                cout<<"1";
            else
                cout<<"0";
            k++;
        }
        cout<<endl;
    }
    return 0;
}



















