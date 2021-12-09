#include <stdio.h>
void PrintStar(int n)
{
    for(int i=0;i<n;i++)
        printf("*");
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        PrintStar(i);
        printf("\n");
    }
}

