// ���ִ���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	static int a[10001];
	int n;
	int val;
	
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&val);
		a[val]++;
	}
	
	int max=-1;
	int result=0;

	for(int i=0;i<=10000;i++)
	{
		
		if(a[i]>max)
		{
			max=a[i];
			result=i;
		}
		
	}
	printf("%d",result);

	return 0;
}

