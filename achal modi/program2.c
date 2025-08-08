#include <stdio.h>
void main()
{
    double x,y,a;
    int c;
    printf("1.addtion\n2.substraction\n3.division\n4.multiplaction\n");
    scanf("%d" , &c);
    printf("Enter x:\n");
    printf("Enter y:\n");
    scanf("%lf" , &x);
    scanf("%lf" , &y);
    if (c==1)
    {
        a = x+y;
        printf("addtion of two number is:%lf" , a);
    }
    else if (c==2)
    {
        a = x-y;
        printf("substraction of two number is:%lf" , a);
    }
    else if (c==3)
    {
        a = x/y;
        printf("division of two number is:%lf" , a);
    }
        else if (c==4)
    {
        a = x*y;
        printf("multiplication of two number is:%lf" , a);
    }
    else
    {
        printf("enter a valid option");
    }

}
