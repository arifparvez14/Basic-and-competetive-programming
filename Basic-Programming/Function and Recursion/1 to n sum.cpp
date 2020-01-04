#include<bits/stdc++.h>
using namespace std;
int summation(int lowerNumber,int upperNumber);
int main()
{
    int lowerNumber,upperNumber,result;
    cout<<"Enter Lower and Upper Limit:";
    cin>>lowerNumber;
    cin>>upperNumber;
    result = summation(lowerNumber,upperNumber);
    cout<<result;

    return 0;
}
int summation(int lowerNumber,int upperNumber)
{
    if(lowerNumber==upperNumber)
        return lowerNumber;
    else
        return lowerNumber+summation(lowerNumber+1,upperNumber);
}

