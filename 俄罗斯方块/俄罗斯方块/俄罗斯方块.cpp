// 俄罗斯方块.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
int main()
{
	 int a[15][10];
	 int b[4][4];
	 int offset=0;//偏移量
	 int col[4]={14,14,14,14};//每列的最大空行号默认为14
	 int c[4]={-15,-15,-15,-15};
	 int loc;
	for(int i=0;i<15;i++)
		for(int j=0;j<10;j++)
			scanf("%d",&a[i][j]);

	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&b[i][j]);

	scanf("%d",&offset);

	//计算从下落位置开始棋盘图每列的最大的空行号
	offset=offset-1;//数组下标从0开始
	for(int j=offset;j<offset+4;j++)
	{
		for(int i=0;i<15;i++)
		{
			if(a[i][j]==1)
			{
				col[j-offset]=i-1;
				break;
			}
		}
	}

	//计算输入的方块最底下的方块的行号即最大行
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<4;i++)
		{
			if(b[i][j]==1)
				c[j]=i;
		}
	}

	// //找出空余行col减去最大行c中的最小值
			int sub=15;
			for(int j=0;j<4;j++)
			{
				if(col[j]-c[j]<sub)
				{
					sub=col[j]-c[j];
					loc=j;
				}
			}



			int base=col[loc]-c[loc];

			//覆盖数据
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				{
					if(b[i][j]==1)
					{
						a[base+i][offset+j]=1;
					}
				}
			}

			//输出最后结果
			for(int i=0;i<15;i++)
			{
				for(int j=0;j<10;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			return 0;
}