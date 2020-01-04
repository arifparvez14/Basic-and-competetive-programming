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
    if(num!=0)
        return num + summation(num-1);
    else
        return num;
}
