#include<bits/stdc++.h>
using namespace std;
int factorial(int n);
int main()
{
    int n,result;
    cin>>n;
    result=factorial(n);
    cout<<result;
    return 0;
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}



