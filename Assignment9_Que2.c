#include <stdio.h>


int main()
{
    int op, n1, n2;
    float res;
    char ch;
    do
    {

        printf (" Select an operation to perform the calculation in C Calculator: ");
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division  \n 5 Exit \n \n Please, Make a choice ");

        scanf ("%d", &op);



    switch (op)
    {
        case 1:
            printf (" You chose: Addition");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            res = n1 + n2;
            printf (" Addition of two numbers is: %.2f", res);
            break;

        case 2:
            printf (" You chose: Subtraction");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            res = n1 - n2;
            printf (" Subtraction of two numbers is: %.2f", res);
            break;

        case 3:
            printf (" You chose: Multiplication");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            res = n1 * n2;
            printf (" Multiplication of two numbers is: %.2f", res);
            break;

        case 4:

            printf (" You chose: Division");
            printf ("\n Enter First Number: ");
            scanf (" %d", &n1);
            printf (" Enter Second Number: ");
            scanf (" %d", &n2);
            if (n2 == 0)
                {
                    printf (" \n Divisor cannot be zero. Please enter another value ");
                    scanf ("%d", &n2);
                }
            res = n1 / n2;
            printf (" Division of two numbers is: %.2f", res);
            break;



        case 5:
            printf (" You chose: Exit");
            exit(0);
            break;

        default:
            printf(" Something is wrong!! ");
            break;
    }
    printf (" \n \n ********************************************** \n ");
    } while (op != 5);

    return 0;
}
