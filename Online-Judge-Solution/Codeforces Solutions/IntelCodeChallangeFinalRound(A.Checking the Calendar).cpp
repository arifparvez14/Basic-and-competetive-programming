#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="saturday";
    char s2[]="sunday";
    char s3[]="monday";
    char s4[]="tuesday";
    char s5[]="wednesday";
    char s6[]="thursday";
    char s7[]="friday";
    char a[10],b[10];
    int i,x,y,sum;
    while(gets(a),gets(b))
    {
        if(strcmp(a,s1)==0)
            x=0;
        else if(strcmp(a,s2)==0)
            x=1;
        else if(strcmp(a,s3)==0)
            x=2;
        else if(strcmp(a,s4)==0)
            x=3;
        else if(strcmp(a,s5)==0)
            x=4;
        else if(strcmp(a,s6)==0)
            x=5;
        else if(strcmp(a,s7)==0)
            x=6;

        if(strcmp(b,s1)==0)
            y=0;
        else if(strcmp(b,s2)==0)
            y=1;
        else if(strcmp(b,s3)==0)
            y=2;
        else if(strcmp(b,s4)==0)
            y=3;
        else if(strcmp(b,s5)==0)
            y=4;
        else if(strcmp(b,s6)==0)
            y=5;
        else if(strcmp(b,s7)==0)
            y=6;

        if((y==((x+30)%7)) || (y==((x+31)%7)) || (y==((x+28)%7)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
