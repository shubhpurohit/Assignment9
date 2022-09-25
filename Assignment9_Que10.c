//C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r1,r2,i=sqrt(-1);
    printf("Enter the real numbers in the quadratic equation\n");

    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    switch(d>0)
    {
    case 1:
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots of quadratic equation is %d %d",r1,r2);
        break;
    case 0:
        switch(d<0)
        {
        case 1:
            r1=((-b/2*a)+(i*sqrt(-(d))/2*a));
            r2=((-b/2*a)-(i*sqrt(-(d))/2*a));
            printf("The roots of quadratic equation is %d %d",r1,r2);
            break;
        case 0:
            r1=-b/(2*a);
            r2=r1;
            printf("The roots of quadratic equation is %d %d",r1,r2);
            break;
        }

    }
    return 0;
}
