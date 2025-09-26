#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter the statement you want to encode:\n");
    scanf("%s", &str);
    int x = strlen(str);
    char str1[x];
    int n1[x];
    int n[x];
    int q = 0;
    int q1 = 2;
    n[0] = 0;
    n[1] = 1;

    while (q<x)
    {
        n[q1] = n[q1-1] + n[q1-2];
        q = q+1;
        q1 = q1+1;
    }
    for(int i = 0;i<x;i++)
    {
        str1[i] = (int)str[i];
    }
    for(int i1 = 0;i1<x;i1++)
    {
        if(n[i1]<26)
        {
            str1[i1] = str1[i1] + n[i1];
            printf("%c",str1[i1]);
        }
        else
        {
            n1[i1] = n[i1]%26;
            str1[i1] = str1[i1] + n1[i1];
            printf("%c",str1[i1]);
        }
    }

}
