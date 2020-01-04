#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,a,c;
    while(cin>>n>>k)
    {
        if(n%2==0)
            c=n/2;
        else if(n%2==1)
            c=(n/2)+1;

    if(k>c)
        cout<<(k-c)*2<<endl;
    else if(k<=c)
        cout<<(k*2)-1<<endl;
    }
    return 0;
}
