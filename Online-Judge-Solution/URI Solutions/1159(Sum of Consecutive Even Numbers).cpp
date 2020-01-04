#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum,i,k;
    while(cin>>n)
    {
        sum=0;
        if(n==0)
        break;

        if(n%2==0)
        {
            sum=n+(n+2)+(n+4)+(n+6)+(n+8);
        }
        else
        {
            k=n+1;
            sum=k+(k+2)+(k+4)+(k+6)+(k+8);
        }
        cout<<sum<<endl;
    }
    return 0;
}
