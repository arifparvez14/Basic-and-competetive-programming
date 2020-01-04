#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,l,m,n,d,flag;
    while(cin>>k>>l>>m>>n>>d)
    {
        flag=0;
        for(int i=1; i<=d; i++)
        {
            if(((i%k)!=0)&&((i%l)!=0)&&((i%m)!=0)&&((i%n)!=0))
                flag++;
        }
        cout<<d-flag<<endl;
    }
    return 0;
}
