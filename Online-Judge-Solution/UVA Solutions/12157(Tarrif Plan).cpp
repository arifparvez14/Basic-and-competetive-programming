#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int test,a[10000],i,number,d1,d2,sum1,sum2,j,m,n;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>number;
        sum1=0,sum2=0;
        for(j=1;j<=number;j++)
        {
          cin>>a[j];
          m=a[j];
          n=a[j];
          d1=m%60;
          //if(d1==0)
           //   sum1=sum1+30;
         /*else*/ if(d1>=1 && d1<=29)
              sum1=sum1+(m/60)*20+10;
          else if(d1>=30 && d1<=59)
              sum1=sum1+(m/60)*20+20;

          d2=n%120;
          /*if(d2==0)
            sum2=sum2+45;
          else*/ if(d2>=1 && d2<=59)
            sum2=sum2+(n/120)*30+15;
          else if(d2>=60 && d2<=119)
            sum2=sum2+(n/120)*30+30;
        cout<<sum1<<" "<<sum2<<endl;

        }
        if(sum1<sum2)
            printf("Case %ld: Mile %ld\n",i,sum1);
        else if(sum2<sum1)
            printf("Case %ld: Juice %ld\n",i,sum2);
        else if(sum1==sum2)
            printf("Case %ld: Mile Juice %ld\n",i,sum1);


    }
    return 0;
}
//check......1905 && 29 30 59 60 119 120
