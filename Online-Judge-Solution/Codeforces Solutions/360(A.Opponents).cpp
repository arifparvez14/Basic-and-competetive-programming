#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,j,sum,count,det;
    string s;
    while(scanf("%d %d",&n,&d)==2)
    {
       det=0,sum=0;
        for(i=0;i<d;i++)
        {
            count=0;
            cin>>s;
            for(j=0;j<n;j++)
            {
                if(s[j]=='0')
                count=1;
            }
            if(count==1)
                sum++;
            else
                sum=0;
            if(sum>det)
            det=sum;
        }
        printf("%d\n",det);

    }
    return 0;
}
