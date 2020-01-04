#include<bits/stdc++.h>
using namespace std;
void recurse(int c)
{
    if(c == 5)
        return ;
    printf("I am learning recursion.\n");
    recurse(c+1);
    return;
}
int main()
{
    recurse(1);
    return 0;
}
