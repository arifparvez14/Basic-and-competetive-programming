#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,a2,a3,a4,i,k,count;
    cin>>n;
    for(i=n+1;; i++)
    {
        count=0;
        k=i;
        a1=k/1000;
        k=k%1000;
        a2=k/100;
        k=k%100;
        a3=k/10;
        k=k%10;
        a4=k/1;
        if((a1==a2) || (a1==a3) || (a1==a4) || (a2==a3) || (a2==a4) || (a3==a4))
            continue;
        else
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
