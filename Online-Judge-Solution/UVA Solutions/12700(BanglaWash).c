#include<stdio.h>
int main()
{
    int n,i,m,j,B,W,T,A;
    char s[15];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        B=0;
        W=0;
        T=0;
        A=0;
        scanf("%d",&m);
        scanf("%s",s);
        for(j=0; j<m; j++)
        {
            if(s[j]=='B')
                B++;
            else if(s[j]=='W')
                W++;
            else if(s[j]=='T')
                T++;
            else if(s[j]=='A')
                A++;
        }

        if((B+A)==m && B!=0 )
            printf("Case %d: BANGLAWASH\n",i+1);
        else if((W+A)==m && W!=0 )
            printf("Case %d: WHITEWASH\n",i+1);
        else if(A==m && A!=0)
            printf("Case %d: ABANDONED\n",i+1);
        else if(B==W)
            printf("Case %d: DRAW %d %d\n",i+1,B,T);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",i+1,B,W);
        else if(W>B)
            printf("Case %d: WWW %d - %d\n",i+1,W,B);

    }
    return 0;
}
