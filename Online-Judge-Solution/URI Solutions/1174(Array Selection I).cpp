#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,a[5],i;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<5;i++)
    {

        if(a[i]<=10)
        printf("A[%f] = %.1f\n",i,a[i]);
    }
    return 0;
}
