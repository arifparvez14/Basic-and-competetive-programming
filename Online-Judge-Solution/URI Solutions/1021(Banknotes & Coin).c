#include<stdio.h>
int main()
{
    float a,p;
    long int b,c,d,e,f,g,h,l,m,n,o;
    while(scanf("%f",&a)==1)
    {
        b=0,c=0,d=0,e=0,f=0,g=0,h=0,l=0,m=0,n=0,o=0,p=0;
        if(a>=100)
        {
            b=a/100;
            a=a-b*100;
        }
        if(a>=50)
        {
            c=a/50;
            a=a-c*50;
        }
        if(a>=20)
        {
            d=a/20;
            a=a-d*20;
        }
        if(a>=10)
        {
            e=a/10;
            a=a-e*10;
        }
        if(a>=5)
        {
            f=a/5;
            a=a-f*5;
        }
        if(a>=2)
        {
            g=a/2;
            a=a-g*2;
        }
        if(a>=1)
        {
            h=a;
            a=a-h;
        }
        if(a>=.50)
        {
            l=a/.50;
            a=a-l*.50;
        }
        if(a>=.25)
        {
            m=a/.25;
            a=a-m*.25;
        }
        if(a>=.10)
        {
            n=a/.10;
            a=a-n*.10;
        }
        if(a>=.05)
        {
            o=a/.05;
            a=a-o*.05;
        }
        if(a>=.01)
        {
            p=a/.01;
        }
        printf("NOTAS:\n");
        printf("%ld nota(s) de R$ 100.00\n",b);
        printf("%ld nota(s) de R$ 50.00\n",c);
        printf("%ld nota(s) de R$ 20.00\n",d);
        printf("%ld nota(s) de R$ 10.00\n",e);
        printf("%ld nota(s) de R$ 5.00\n",f);
        printf("%ld nota(s) de R$ 2.00\n",g);
        printf("MOEDAS:\n");
        printf("%ld moeda(s) de R$ 1.00\n",h);
        printf("%ld moeda(s) de R$ 0.50\n",l);
        printf("%ld moeda(s) de R$ 0.25\n",m);
        printf("%ld moeda(s) de R$ 0.10\n",n);
        printf("%ld moeda(s) de R$ 0.05\n",o);
        printf("%.0f moeda(s) de R$ 0.01\n",p);
    }
}
