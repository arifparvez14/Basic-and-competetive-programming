#include<bits/stdc++.h>
using namespace std;
int fcall=0;
int fibo[50];
int fib(int n)
{
    fcall = fcall + 1;
    if(fibo[n]!=0)
        return fibo[n];

    if(n == 1 || n == 2)
        return fibo[n];

    fibo[n]= fib(n-1)+fib(n-2);
    return fibo[n];
}
int main()
{
    int n;
    char s[3];
    fibo[1]=1;
    fibo[2]=1;
    cin>>n;
    if(n==1)
        strcpy(s,"st");
    else if(n==2)
        strcpy(s,"nd");
    else if(n==3)
        strcpy(s,"rd");
    else
        strcpy(s,"th");

    printf("%d%s fibonacci number is %d\n",n,s,fib(n));
    printf("Number of function calls : %d\n",fcall);

    for(n=1;n<12;n++)
    {
        printf("%d: %d\n",n,fibo[n]);
    }
    return 0;
}

