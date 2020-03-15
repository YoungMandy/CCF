// 中间数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
int num;
int main()
{
	int a[1000];
	int n,temp=0;
	int min=0,max=0;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int b=1;b<n;b++)//冒泡排序
	{
		for(int j=0;j<n-b;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}

	for(int k=0;k<n;k++)
	{
		 num=n/2;
		if(a[k]<a[num])
			min++;
		if(a[k]>a[num])
			max++;
	}
	if(min==max)
		printf("%d",a[num]);
	else
		printf("-1");
			

	return 0;
}

