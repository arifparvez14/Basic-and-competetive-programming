#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,num1,num2,minNumber,hcf=1;

   cin>>num1>>num2;
   minNumber=(num1<num2) ? num1:num2;

   for(i=1;i<=minNumber;i++)
   {
       if(num1%i==0 && num2%i==0)
       {
           hcf=i;
       }
   }
   cout<<"HCF is"<<hcf;
   return 0;
}
