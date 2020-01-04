#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10001];
    long int i,n,l,sq,flag,m,z,k,j;
    cin>>n;
    getchar();
    for(i=1;i<=n;i++)
    {
        flag=0;
        gets(s);
        l=strlen(s);
        for(j=1;j<=100;j++)
        {
            if(j*j==l){
                flag=1;
                z=j;
                break;
            }
        }
        if(flag==0)
        {
            printf("INVALID\n");
            continue;
        }
        else if(flag==1)
        {
            for(k=0;k<z;k++)
            {
               for(m=k;m<l;m=m+z)
               {
                   printf("%c",s[m]);
               }
            }
        }
        printf("\n");
    }
    return 0;
}
