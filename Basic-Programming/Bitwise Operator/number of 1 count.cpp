#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i;
    cin>>n;
    c=0;
    while(n)
    {
        if(n&1)
            c++;
        n=n>>1;
    }
    printf("Number of 1 is: %d\n",c);
    return 0;
}
