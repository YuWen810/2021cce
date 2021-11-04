#include <stdio.h>
int main()
{
    int n,bad=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if(n%i==0)
            bad++;
    if(bad==0)
        printf("%d是質數",n);
    else
        printf("%d不是質數",n);
}
