#include<stdio.h>
int a[10000000];
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++)
    {
        if(a[i]==0)
        {
            ans++;
            ///printf("%d ",i);
            for(int k=i+i;k<10000000;k+=i)
                a[k]=1;
        }
    }
    printf("ans: %d",ans);
}
/*
///step03-1(a)
#include<stdio.h>
int a[100];
int main()
{
    for(int i=2;i<100;i++)
    {
        if(a[i]==0)
        {
            printf("%d ",i);
            for(int k=i+i;k<100;k+=i)
                a[k]=1;
        }
    }
}
*/
