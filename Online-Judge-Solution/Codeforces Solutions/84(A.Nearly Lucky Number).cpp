#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,r,c;
    while(cin>>n)
    {
        c=0;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            if(r==4 || r==7)
            {
                c++;
            }
        }
        if(c==4 || c==7)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
    return 0;
}
