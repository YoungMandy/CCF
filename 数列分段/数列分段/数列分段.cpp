// 数列分段.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n;
	int a[1000];
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int count=1;
	for(int j=1;j<n;j++)
	{
		if(a[j]!=a[j-1])
			count++;
	}

	printf("%d",count);


	return 0;
}

