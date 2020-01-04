#include<bits/stdc++.h>
using namespace std;
int fibonnaci(int n);
int main()
{
    int n,result;
    cin>>n;
    result=fibonnaci(n);
    cout<<result;
    return 0;
}
int fibonnaci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonnaci(n-1)+ fibonnaci(n-2);
}


