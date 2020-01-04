#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll A,B,t,k=0,i,j,x,y,num1,num2;
    cin>>t;
    while(t--)
    {
        cin>>A>>B;
        num1=(A/3)*2;
        i=A%3;
        if(i==2)
            num1++;

        num2=(B/3)*2;
        j=B%3;
        if(j==2)
            num2++;

        x=num2-num1;
        x++;
        if(i==1)
            x--;
        printf("Case %lld: %lld\n",++k,x);

    }
    return 0;
}
