#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,leftDigit,rightDigit,leftResult,rightResult;
    while(1)
    {
        printf("Enter the number (0 to exit) ");
        cin>>num;
        if(num==0)
            break;
        printf("Enter left shift digit:");
        cin>>leftDigit;
        leftResult=num<<leftDigit;
        printf("Left Shift Result is: %d\n",leftResult);
    }
    return 0;
}

