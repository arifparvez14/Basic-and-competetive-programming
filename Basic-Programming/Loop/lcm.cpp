#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,num1,num2,maxNumber,lcm=1;

   cin>>num1>>num2;
   maxNumber=(num1>num2) ? num1:num2;
   i=maxNumber;
   while(1)
   {
       if(i%num1==0 && i%num2==0)
       {
           lcm=i;
           break;
       }
   }
   cout<<"LCM is"<<lcm;
   return 0;
}
