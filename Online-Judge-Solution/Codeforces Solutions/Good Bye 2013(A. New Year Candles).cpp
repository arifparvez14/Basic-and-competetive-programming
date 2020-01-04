#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,s,sum=0,l;
    cin>>a>>b;
    n=a;
    while(1)
    {
        l=n/b;
        s=n%b;
        sum=sum+l;
        n=l+s;
        //cout<<l<<s<<sum<<n<<endl;
        if(n<b)
            break;
    }
    cout<<sum+a<<endl;

    return 0;
}
