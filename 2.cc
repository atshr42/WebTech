#include<stdio.h>
#include<conio.h>
int main()
{
    float m,a,h,v,s,e;
    printf("enter the value of m,a,h and v:");
    scanf("%f%f%f%f",&m,&a,&h,&v);
    s=(a*h)+(v*v)/2;
    e=s*m;
    printf("energy=%.2f",e);
    printf("Hello world");
    getch();
    return 0;
}