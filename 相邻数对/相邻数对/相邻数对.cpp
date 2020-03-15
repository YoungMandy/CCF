// 相邻数对.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
int main()
{
	int a[1000];
	int n;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(abs(a[i]-a[j])==1)
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}

