#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int i,n;
    while(scanf("%c %d",&ch,&n)==2)
    {
        i=(ch-'a')+1;
        if((i==1 && n==1) || (i==1 && n==8) || (i==8 && n==1) ||(i==8 && n==8))
            printf("3\n");
        else if((i==1 && n==7) || (i==1 && n==6) ||(i==1 && n==5) ||
                (i==1 && n==4) || (i==1 && n==3) || (i==1 && n==2))
            printf("5\n");
        else if((i==8 && n==7) || (i==8 && n==6) ||(i==8 && n==5) ||
                (i==8 && n==4) || (i==8 && n==3) || (i==8 && n==2))
            printf("5\n");
        else if((i==2 && n==8) || (i==3 && n==8) ||(i==4 && n==8) ||
                (i==5 && n==8) || (i==6 && n==8) || (i==7 && n==8))
            printf("5\n");
        else if((i==2 && n==1) || (i==3 && n==1) ||(i==4 && n==1) ||
                (i==5 && n==1) || (i==6 && n==1) || (i==7 && n==1))
            printf("5\n");
       else
             printf("8\n");
    }
    return 0;
}
