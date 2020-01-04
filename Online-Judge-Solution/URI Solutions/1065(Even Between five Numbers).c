#include<stdio.h>
int main()
{
  int a[5],countt=0,i;
  for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            countt=countt+1;
            }
  }
  printf("%d valores pares\n",countt);
  return 0;

}
