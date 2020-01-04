#include<bits/stdc++.h>
using namespace std;
int summation(int num);
int main()
{
    int num,result;
    cin>>num;
    result=summation(num);
    cout<<result;

    return 0;
}
int summation(int num)
{
    if(num==0)
        return 0;

    return (num%10)+summation(num/10);
}

