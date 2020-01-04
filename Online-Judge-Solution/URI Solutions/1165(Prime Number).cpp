#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,c,num,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=0;
        cin>>num;
        for(k=1;k<=(num/2);k++)
        {
            if(num%k==0)
                c++;
        }
        if(c==1)
            printf("%lld eh primo\n",num);
        else if(c>1)
           printf("%lld nao eh primo\n",num);
    }
    return 0;
}
