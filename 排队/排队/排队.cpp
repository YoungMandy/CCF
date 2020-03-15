// 排队.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
int find(int a[],int p);
void swap(int b[],int x , int y );
int i,n,change;
int a[1000];
int p,q,index;
int main()
{
	
	scanf("%d%d",&n,&change);//获取学生数量和改变次数
	
	for(i=0;i<n;i++)//初始化数组
	{
		a[i]=i+1;
	}

	for(int k=0;k<change;k++)
	{

		scanf("%d%d",&p,&q);//获取学生学号和移动距离
		find(a,p);
			if(q>0)//后移
			{
				while(q!=0)
					{
						swap(a,index,index+1);
						index++;
						q--;
					}	

			}
			if(q<0)//前移
			{
				while(q!=0)
				{
					swap(a,index,index-1);
					index--;
					q++;
				}
			}
	}

		for(int g=0;g<n;g++)
		{
			printf("%d\t",a[g]);
		}
	return 0;
}

int find(int a[],int p)
{
	for( int j=0;j<n;j++)
	{
		if(a[j]==p)
		{
			index=j;//寻找的学生所在位置
			return index;
		}
	}
	return -1;
}

void swap(int a[] ,int x , int y )
{
	int xx=a[x];
	int yy=a[y];
	a[x]=yy;
	a[y]=xx;
}

	