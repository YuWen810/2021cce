#include <stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	int s;
    	scanf("%d",&s);
    	sum+=s;
    }
    printf("%.2f",sum/n);
}
