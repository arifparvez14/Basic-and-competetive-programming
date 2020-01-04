#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("*p = %d\n",*p);

    *p=20;
    printf("*p = %d\n",*p);
    printf("Value of x is:%d\n",x);
    printf("The address of x is %p\n",&x);
    printf("Value of P: %p",p);
    return 0;
}





