#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n;
    cin>>n;
    string s[5]= {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    if(n<5)
    {
        cout<<s[n-1];
    }
    else
    {
        while (n>5)
        {
            n=n/2;
            n=n-2;
        }
        cout<<s[n-1];
    }
    return 0;
}
