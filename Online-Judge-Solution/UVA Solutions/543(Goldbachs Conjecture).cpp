#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long int seive[1000000],n,sq,i,j,cnt,k,a,b,x[1000000];
int main()
{

    while((scanf("%lld",&n)==1) && n!=0)
    {
        cnt=0,k=0;
        sq=sqrt(n);
        for(i=4; i<=n; i+=2)
        {
            seive[i]=1;
        }
        for(i=3; i<=sq; i+=2)
        {
            if(seive[i]==0)
            {
                for(j=i*i; j<=n; j+=i)
                    seive[j]=1;
            }
        }
        for(i=3; i<=n; i++)
        {
            if(seive[i]==0){
                x[cnt]=i;
                cnt++;
            }
        }
        for(i=0;i<=(cnt-1);i++){
            for(j=i;j<=(cnt-1);j++){
                if(n==(x[i]+x[j]))
                   {
                      if((x[j]-x[i])>=k)
                      {
                          k=x[j]-x[i];
                          b=x[j];
                          a=x[i];
                      }
                   }
            }
        }
        printf("%lld = %lld + %lld\n",n,a,b);
    }
    return 0;
}
