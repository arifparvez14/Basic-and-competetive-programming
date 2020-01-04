#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,l1,l2,i;
    char s1[200]={0},s2[200]={0};
    while(gets(s1),gets(s2))
    {
        l1=strlen(s1);
        l2=strlen(s2);
        if(l2>=l1)
        {
            for(i=0;i<l2;i++)
                printf("%c%c\n",s2[i],s1[i]);
        }
        else
        {
             for(i=0;i<l1;i++)
                printf("%c%c\n",s2[i],s1[i]);
        }

    }
    return 0;
}
