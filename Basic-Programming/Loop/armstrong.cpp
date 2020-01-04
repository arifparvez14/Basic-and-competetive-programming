#include<bits/stdc++.h>
using namespace std;
int main()
{
    int originalNumber, num, lastDigit,digits,sum;
    cin>>num;
    originalNumber=num;
    sum=0;

    digits=(int)log10(num)+1;
    while(num>0)
    {
        lastDigit=num%10;
        sum=sum+round(pow(lastDigit,digits));
        num=num/10;
    }
    if(originalNumber==sum)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
