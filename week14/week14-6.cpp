#include<stdio.h>
int main()
{
    int n,a[10][10];
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    		scanf("%d",&a[i][j]);
    }
    for(int j=0;j<n;j++)
    {
    	for(int i=0;i<n;i++)
    		printf("%3d",a[i][j]);
    	printf("\n");
    }
}

