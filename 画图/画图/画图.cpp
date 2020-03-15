// 画图.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	static int a[100][100];
	int b[4];
	int n;//n行指令
	int count=0;
	scanf("%d",&n);

	while(n--)
	{
		for(int k=0;k<4;k++)
		{
			scanf("%d",&b[k]);
		}

		for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				if(((b[0]<=i)&&(i<b[2]))&&((b[1]<=j)&&(j<b[3]))&&(a[i][j]==0))
				{
					a[i][j]=1;
					count++;					
				}
			}
		}
		
	}

	printf("%d",count);


	return 0;
}

