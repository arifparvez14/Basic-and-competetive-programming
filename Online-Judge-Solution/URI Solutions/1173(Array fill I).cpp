#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10],c=1,i,sum;
    cin>>n;
    a[0]=n;
    sum=n;
    while(1)
    {
        a[c]=sum*2;
        sum=a[c];
        c++;
        if(c==10)
            break;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
