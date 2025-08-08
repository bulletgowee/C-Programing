#include <stdio.h>
void main()
{
    double x = 87.68;
    double a,y;
    int c;
    printf("1.convert to rupee\n2.convert to dollar\n");
    scanf("%d" , &c);
    printf("Enter amount:");
    scanf("%lf" , &y);
    if (c==1)
    {
        a = y*87.69;
        printf("%lf dollar is %lf rupee" , &y , &a);
    }
    else if (c==2)
    {
        a = y/87.69;
        printf("%lf rupee is %lf dollar" , &y , &a);
    }
}
