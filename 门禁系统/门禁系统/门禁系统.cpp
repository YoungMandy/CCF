// 门禁系统.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
int a[1000];
int b[1000];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int j=0;j<n;j++)
		b[j]=1;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				b[i]++;
			}
		}
	}

	for(int j=0;j<n;j++){
		printf("%d",b[j]);
		printf(" ");
	}
	return 0;
}

