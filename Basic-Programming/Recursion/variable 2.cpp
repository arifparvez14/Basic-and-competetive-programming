#include<bits/stdc++.h>
using namespace std;
int x=1;
void myfunc(int y)
{
    y = y * 2;
    x = x + 10;
    printf("Value inside myfunc,x:%d and y:%d\n",x,y);
}
int main()
{
    int y=5;
    x=10;
    myfunc(y);
    printf("Value inside main,x:%d and y:%d",x,y);
    return 0;
}

