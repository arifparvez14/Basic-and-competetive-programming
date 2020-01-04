#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int l,i,j,count,k,c,z;
    char s[10000],x[10000],y[10];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            count=0;
            if(s[i]==' ')
                printf(" ");
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                k=i;
                for(j=i;!(s[j]>='a'&&s[j]<='z')||!(s[j]>='A'&&s[j]<='Z');j++)
                    count++;
                for(l=k,c=0;l<(k+count);l++,c++)
                    x[c]=s[l];
                x[count]='a';
                x[count+1]='y';

                for(z=0;z<(count+1);z++)
                    cout<<x[z];


            }
            else
            {
                k=i;
                for(j=i;!(s[j]>='a'&&s[j]<='z')||!(s[j]>='A'&&s[j]<='A');j++)
                    count++;

                for(l=k+1,c=0;l<(k+count);l++,c++)
                    x[c]=s[l];
                    x[count-1]=s[k];
                    x[count]='a';
                    x[count+1]='y';

                for(z=0;z<(count+1);z++)
                    cout<<x[z];

            }
        }
    }
    return 0;

}
