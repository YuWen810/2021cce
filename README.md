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

## 世界回文日
```c
#include<stdio.h>
int a[8]={2,0,2,1,1,2,0,2};
int main()
{
    for(int i=0;i<8;i++)
    {
        if(a[i]==a[7-i])
            printf("%d %d 相同\n", a[i],a[7-i]);
    }
}
```
