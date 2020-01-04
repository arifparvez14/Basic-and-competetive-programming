#include<bits/stdc++.h>
using namespace std;
long long int factorial(long long int n)
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}
int main()
{
    long long int k,l,i,mul,m,c;
    string s;
    cin>>k;
    for(i=1;i<=k;i++)
    {
        mul=1;
        cin>>s;
        l=factorial(s.length());
        for(m=0;m<s.length();m++)
        {
           c=0;
           for(int x=0;x<s.length();x++)
           {
               if(s[m]==s[x])
                    c++;
           }
           mul=mul*factorial(c);
        }
        cout<<l<<mul;
        printf("Data set %lld: %lld",i,l/mul);
    }

    return 0;
}
