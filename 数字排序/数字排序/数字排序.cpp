// 数字排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
int a[1000];

int main()
{
	int n;
	int val;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val);
		a[val]++;
	}

	for(int i=1000;i>0;i--)
	{
		for(int j=0;j<1001;j++)
		{
			if(a[j]==i)
			{
				printf("%d %d\n",j,a[j]);
			}
		}
	}

	return 0;
}

