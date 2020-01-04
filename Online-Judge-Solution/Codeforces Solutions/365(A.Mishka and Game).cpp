#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,b,c1=0,c2=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>b)
            c1++;
        else if(b>a)
            c2++;
        else
            continue;
    }
    if(c1>c2)
        cout<<"Mishka"<<endl;
    else if(c2>c1)
        cout<<"Chris"<<endl;
    else if(c1==c2)
        cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
