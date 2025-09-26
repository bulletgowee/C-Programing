#include <stdio.h>
void main()
{
    int c[] = {1,2,5,10,20,50,100,200,500};
    int a,a1;
    int i = 8;
    printf("Enter total amount:");
    scanf("%d",&a);
    for(int i = 8;i >0;i--)
    {
        a1 = 0;
        if (a >= c[i])
        {
           a1 = a/c[i];
            a = a%c[i];
        }
        if(a1 != 0)
        {
           printf("%d notes of %d\n",a1,c[i]);
        }
    }
}
