// 最大波动值.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n;//天数
	int sub=0;//差值
	int temp=0;
	int a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int j=0;j<n-1;j++)
	{
		sub=a[j+1]-a[j];
		if(sub<0)
			sub=-sub;
		if(temp<sub)
			temp=sub;
			
	}
	printf("%d",temp);

	return 0;
}

