# 2021cce
這是我在資傳一甲的程式專案倉庫


# 第01週
```c
#include <stdio.h>
int main()
{
    printf("Hello World\n");
}
```
# 第03週
變數宣告
scanf及printf的意義

# 第04週
兩數相加
運算(加減乘除)

# 第05週
成績評等
if-else

# 第06週
2數交換、3數排序
while(迴圈)

# 第07週
3數排序
for、while迴圈

# 第08週
迴圈口訣:迴圈前、迴圈中、迴圈結束
雙層迴圈

# 第10週
陣列:陣列宣告
質數篩子法

# 第11週
bubble sort:泡沫排序法
```c
for(int k=0;k<100-1;k++)//做很多次
{
    for(int i=0;i<100-1;i++)//兩兩相比
    {
        if(a[i]>a[i+1])	//若大小順序相反就交換
    	{
    		int temp=a[i];
    		a[i]=a[i+1];
    		a[i+1]=temp;
    	}
    }
}
```
# 第12週
select sort:選擇排序法
```c
for(int i=0;i<100;i++)
    {
        for(int j=i+1;j<100;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
```
![step02-2](https://user-images.githubusercontent.com/81633513/144385993-a081aec5-4d45-4162-8f33-dba87cc9472d.png)

## 世界迴文日
```c
#include<stdio.h>
int a[8]={2,0,2,1,1,2,0,2};
int main()
{
    for(int i=0;i<8;i++)//迴圈可以跑4次就好
    {
        if(a[i]==a[7-i])
            printf("%d %d 相同\n", a[i],a[7-i]);
    }
}
```
![step03-1](https://user-images.githubusercontent.com/81633513/144391826-efafccd5-d538-4e12-82ce-5ff475c36d72.png)


# 第13週
百數排序--選擇排序法(selection sort)
函數、函式呼叫
# 第14週
2D陣列
```c
#include<stdio.h>
int a[2][3]={{10,20,30},{40,50,60}};
int main()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
        printf("\n");
    }
}
```
向量乘法
```c
#include<stdio.h>
int a[3]={10,20,30};
int b[3]={40,50,60};
int c[3];
int main()
{
    for(int i=0;i<3;i++)
    {
        c[i]=a[i]*b[i];
        printf("%d ",c[i]);
    }
    printf("\n");
    int ans=0;
    for(int i=0;i<3;i++)
        ans+=a[i]*b[i];
    printf("%d",ans);
}
```
矩陣加法
```c
#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
矩陣乘法

#第15週 
輾轉相除法
```c
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a%b;
    while(1)
    {
    	if(c==0)
    		break;
    	a=b;
    	b=c;
    	c=a%b;
    }
    printf("%d",b);
}
```
