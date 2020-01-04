#include<bits/stdc++.h>
using namespace std;
int fcall=0;
int factorial(int n)
{
    fcall = fcall + 1;
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"Undefined";
        return 0;
    }
    printf("Factorial of %d is %d\n",n,factorial(n));
    printf("Number of function calls %d",fcall);
    return 0;
}
