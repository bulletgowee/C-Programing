#include <stdio.h>
void main()
{
    double x;
    double a,y;
    int c;
    printf("1.convert to celcius\n2.convert to ferenhite\n");
    scanf("%d" , &c);
    printf("Enter temp:");
    scanf("%lf" , &y);
    if (c==1)
    {
        a = (y-32)/(9/5);
        printf("%lf fahrenheit is %lf celsius" , &y , &a);
    }
    else if (c==2)
    {
        a = (1.8*y)+32;
        printf("%lf celsius is %lf fahrenheit" , &y , &a);
    }
}
