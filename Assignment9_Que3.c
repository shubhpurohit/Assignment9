//program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the day of the week:-");
    scanf("%d",&n);
    printf("\n");
    switch(n)
    {

    case 1:
        printf("Its Monday get back to work \n");
        break;
    case 2:
        printf("Keep the same energy for the tuesday \n");
        break;
    case 3:
        printf("You are going great on wednesday \n");
        break;
    case 4:
        printf("Gosh! The half of the week is over BTW its thrusday... \n");
        break;
    case 5:
        printf("Yeah! Friday One last day left to survive to weekend\n");
        break;
    case 6:
        printf("Finally its saturday \n");
        break;
    case 7:
        printf("Why the Sunday passes so fast!!!!\n");
        break;
    default:
        printf("Go! and acknowledge about the number of week days ");

    }
    return 0;
}
