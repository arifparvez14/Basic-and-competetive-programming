#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int *p,*q;
    int y;

    p=&x;
    y=*p;
    *p=15;

    q=&y;
    *q=20;

    printf("Value of x: %d\n",x);
    printf("Value of y: %d\n",y);
    printf("Value of *p: %d\n",*p);
    printf("Value of *q: %d\n",*q);
    return 0;
}







