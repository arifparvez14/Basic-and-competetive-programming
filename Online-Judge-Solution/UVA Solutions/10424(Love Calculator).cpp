#include<bits/stdc++.h>
using namespace std;
double rev(double num)
{
    double sum=0,d;
    while(num!=0)
    {
        d=(int)num%10;
        num=num/10;
        sum=sum+d;

    }
    return sum;
}
int main()
{
    char s1[100],s2[100];
    double sum1,sum2,LP;
    while(gets(s1),gets(s2))
    {
        sum1=0,sum2=0;
        for(int i=0; i<=strlen(s1); i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
            {
                sum1=sum1+(s1[i]-'a')+1;
            }
            if(s1[i]>='A' && s1[i]<='Z')
            {
                sum1=sum1+(s1[i]-'A')+1;
            }
        }
        for(int i=0; i<=strlen(s2); i++)
        {
            if(s2[i]>='a' && s2[i]<='z')
            {
                sum2=sum2+(s2[i]-'a')+1;
            }
            if(s2[i]>='A' && s2[i]<='Z')
            {
                sum2=sum2+(s2[i]-'A')+1;
            }
        }
        if(sum1>9)
        {
            while(sum1>9)
            {
                sum1=rev(sum1);

            }
        }
        if(sum2>9)
        {
            while(sum2>9)
            {
                sum2=rev(sum2);
            }
        }



        if(sum1>sum2)
        {
            LP=(sum2/sum1)*100;
            printf("%.2lf %%\n",LP);
        }
        else
        {
            LP=(sum1/sum2)*100;
            printf("%.2lf %%\n",LP);
        }

    }
    return 0;
}
