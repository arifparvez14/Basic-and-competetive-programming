#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,originalNumber, num, lastDigit,digits,sum;
    cin>>num;
    sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num==sum)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}

