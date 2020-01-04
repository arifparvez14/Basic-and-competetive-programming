#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    double s[10000],sum,avg,det1,det2;
    while(cin>>n && n!=0)
    {
        sum=0,det1=0,det2=0;
        for(i=0; i<n; i++)
        {
            scanf("%lf",&s[i]);
            sum=sum+s[i];
        }
        avg=sum/(double)n;
        for(i=0; i<n; i++)
        {
            if(s[i]>avg)
                det1=det1+(double)(long long)((s[i]-avg)*100.00)/100.00;
            else if(s[i]<avg)
                det2=det2+(double)(long long)((avg-s[i])*100.00)/100.00;
        }
        if(det1>det2)
        printf("$%.2lf\n",det1);
        else
        printf("$%.2lf\n",det2);
    }
    return 0;
}
