#include<bits/stdc++.h>
#define ll long long int
#define m 1000000
using namespace std;
int main()
{
    int l,r,e,o,s,i,k;
    while(cin>>l>>r)
    {
        k=abs(r-l);
        if(l==0 && r==0)
            cout<<"NO"<<endl;

        else if(k==0 || k==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
