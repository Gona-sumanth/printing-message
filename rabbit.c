#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,r1,r2,real,imaginary;
    printf("enter a,b,c values:");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        r1=(-b)/(2*a);
        r2=(-b)/(2*a);
        printf("the roots are %f\t%f",r1,r2);
        printf("\n the roots are real and equal");
    }
    else if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("the roots are %f\t%f",r1,r2);
        printf("\n the roots are real and distint");
    }
    else
    {
        real=(-b)/(2*a);
        imaginary=(sqrt(d))/(2*a);
        r1=real+imaginary;
        r2=real-imaginary;
        printf("the roots are %f\t%f",r1,r2);
        printf("\n the roots are NON real nd complex");
    }
   
   return 0; 
}