/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include<stdio.h>
int main()
{
    int l1,l2,l3,choice;
    printf("1. To check if the triangle is isosceles \n");
    printf("2. To check if the triangle is right angle \n");
    printf("3. To check if the triangle is equilateral\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the three sides of triangle\n");
        scanf("%d%d%d",&l1,&l2,&l3);
        if(((l1==l2)&&(l2!=l3))||((l2==l3)&&(l1!=l3))||((l1==l3)&&(l2!=l3)))
            printf("The Triangle is Isosceles");
        else
            printf("The Triangle is not Isosceles");
            break;
    case 2:
        printf("Enter the base of triangle\n");
        scanf("%d",&l1);
        printf("Enter the height of triangle\n");
        scanf("%d",&l2);
        printf("Enter the hypotenuse of triangle\n");
        scanf("%d",&l3);
        if((l3*l3)==((l2*l2)+(l1*l1)))
            printf("The triangle is right angled");
        else
            printf("The triangle is not right angled");
            break;
    case 3:
        printf("Enter the three sides of triangle\n");
        scanf("%d%d%d",&l1,&l2,&l3);
        if((l1==l2) && (l2==l3))
            printf("The triangle is equilateral");
        else
            printf("The triangle is not equilateral");
        break;
        }

return 0;
}








