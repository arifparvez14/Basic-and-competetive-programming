#include<bits/stdc++.h>
using namespace std;
int main()
{
    int firstNumber,secondNumber,thirdNumber,i,term;
    cin>>term;

    firstNumber=0;
    secondNumber=1;
    thirdNumber=0;

    for(i=1;i<=term;i++)
    {
        cout<<thirdNumber<<" ";
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = firstNumber + secondNumber;
    }
    return 0;
}
