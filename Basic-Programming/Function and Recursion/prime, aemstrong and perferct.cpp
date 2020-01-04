#include<bits/stdc++.h>
using namespace std;
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;
    cin>>num;

    if(isPrime(num))
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;


    if(isArmstrong(num))
        cout<<"Yes Armstrong"<<endl;
    else
        cout<<"Not an Armstrong"<<endl;

    if(isPerfect(num))
        cout<<"Perfect"<<endl;
    else
        cout<<"Not Perfect"<<endl;

    return 0;
}
int isPrime(int num)
{
    int i;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int isArmstrong(int num)
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;

    originalNum = num;
    digits = (int) log10(num) + 1;
    while(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
    }
    return (originalNum == sum);
}
int isPerfect(int num)
{
    int i, sum, n;
    sum = 0;
    n = num;

    for(i=1; i<n; i++)
    {
        if(n%i == 0)
            sum += i;
    }
    return (num == sum);
}


