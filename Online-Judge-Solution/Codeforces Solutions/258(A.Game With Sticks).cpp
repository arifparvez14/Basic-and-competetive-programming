#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,pos;
    while(cin>>n>>m)
    {
        if(n<m)
            pos=n;
        else if(m<n)
            pos=m;
        else
            pos=m;

        if(pos%2==0)
            cout<<"Malvika"<<endl;
        else if(pos%2!=0)
            cout<<"Akshat"<<endl;
    }
    return 0;
}
