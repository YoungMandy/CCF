// �ֵ���.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n,k,count=0,val,sub=0;
	scanf("%d%d",&n,&k);
	while(n--)
	{
		scanf("%d",&val);

		sub+=val;
		if(sub>=k)
		{
			count++;
			sub=0;
		}
	}
	if(sub>0)
	{
	count++;
	}
	printf("%d",count);

	return 0;
}

