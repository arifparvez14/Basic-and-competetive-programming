#include<bits/stdc++.h>
using namespace std;

bool checkBit(int n, int i){
    return (n & (1 << i));
}

int resetBit(int n, int i){
    return (n & ~(1 << i));
}

int setBit(int n, int i){
    return (n | (1 << i));
}
int main()
{
    int k = checkBit(13,1);
    cout<<k;
    return 0;
}
