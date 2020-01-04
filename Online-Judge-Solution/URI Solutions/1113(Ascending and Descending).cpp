#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,sum;
    while(cin>>n>>m)
    {
        if(n==m)
            break;

        if(n>m)
            cout<<"Decrescente"<<endl;
        else if(n<m)
            cout<<"Crescente"<<endl;
    }
    return 0;
}
