#include<bits/stdc++.h>
using namespace std;
void recurse()
{
    static int c = 1;
    if(c > 5)
        return ;
    printf("%d ",c);
    c = c + 1;
    recurse();
    printf("%d ",c);
}
int main()
{
    recurse();
    return 0;
}


