#include<stdio.h>
int main()
{
    int x,year;
    printf("Enter an year\n");
    scanf("%d",&year);
    x=((year%4==0)&&((year%400==0)||(year%100!=0)));
    switch(x)
    {
    case 0:
        printf("Not leap year");
        break;
    case 1:
        printf("Leap year");
        break;
    default:
        printf("invalid");
        break;
    }
    return 0;
}
