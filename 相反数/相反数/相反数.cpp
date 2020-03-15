// 相反数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	
	int n;
	int a[500];
	int count=0;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i]==-a[j])
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}

