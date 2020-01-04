#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,r1,r2;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1<h2)
            r1=h2-h1;
        else
            r1=24-(h1-h2);

        if(m2>m1)
            r2=m2-m1;
        else
        {
            r1=r1-1;
            r2=(m2+60)-m1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",r1,r2);
    }
    return 0;
}
