#include<bits/stdc++.h>
using namespace std;
union u{
    char ch;
    int x;
    int y;
}uv;

int main()
{
    uv.ch='A';
    printf("uv.ch = %c\n",uv.ch);

    uv.x=17;
    printf("uv.ch = %c\n",uv.ch);
    printf("uv.x = %d\n",uv.x);

    uv.y=18;
    printf("uv.ch = %c\n",uv.ch);
    printf("uv.x = %d\n",uv.x);
    printf("uv.y = %d\n",uv.y);
    return 0;
}
