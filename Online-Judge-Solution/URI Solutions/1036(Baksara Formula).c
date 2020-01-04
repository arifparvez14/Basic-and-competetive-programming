#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,check1,root,R1,R2;
    scanf("%f %f %f",&a,&b,&c);

    check1=(b*b)-4*a*c;

    if(check1<0 || a==0)
        printf("Impossivel calcular\n");
    else{
        root=sqrt(check1);
        R1=(-b+root)/(2*a);
        R2=(-b-root)/(2*a);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    return 0;
}
