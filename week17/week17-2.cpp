#include <stdio.h>
int main()
{
    int n=1234567892;
    while(n>0)
    {
        printf("%d => %d %d \n",n,n/10,n%10);
        n=n/10;
    }
}
