#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,sum,k,num;
    cin>>n;
    for(k=1; k<=n; k++)
    {
        sum=0;
        cin>>num;
        for(i=1; i<num; i++)
        {
            if((num%i)==0)
            {
                sum=sum+i;
            }
        }
        if(sum==num)
            printf("%lld eh perfeito\n",num);
        else if(sum!=num)
            printf("%lld nao eh perfeito\n",num);

    }
    return 0;
}
