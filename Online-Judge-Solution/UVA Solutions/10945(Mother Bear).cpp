#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x,c,i,d,v,flag,k,count;
    char a[5]="DONE";
    char s[10000],s1[10000],s2[10000];
    while(gets(s))
    {
        count=0;
        if(strcmp(s,a)==0)
            break;
        c=0;
        for(i=0;i<strlen(s);i++)
        {

           if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
           {
               s1[c]=s[i];
               c++;
           }
        }
        d=0;
        for(i=(c-1);i>=0;i--)
        {
            if(s2[d]=s1[i])
            d++;
        }
        for(i=0;i<c;i++)
        {
               k=s1[i]-s2[i];
               if(k==0 || k==32 || k==-32){
                  count++;
               }
        }
       if(count==c)
           cout<<"You won't be eaten!"<<"\n";
       else
           cout<<"Uh oh.."<<"\n";

    }
    return 0;
}
