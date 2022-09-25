//Program to Convert even number into its upper nearest odd number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter an even number \n");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
        n+=1;
        printf("Upper nearest odd number is %d",n);
        break;
    default:
        printf("!! odd number detected !!");
        break;
    }
    return 0;
}
