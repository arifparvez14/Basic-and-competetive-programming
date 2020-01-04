#include<bits/stdc++.h>
using namespace std;
void recurse(int c)
{
    if(c > 5)
        return ;
    printf("%d ",c);
    recurse(c + 1);
    printf("%d ",c);
}
int main()
{
    recurse(1);
    return 0;
}

