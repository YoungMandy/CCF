// 消除棋子.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n,m;//n行m列
	int a[1000][30];
	int b[1000][30];
	
	scanf("%d%d",&n,&m);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}

	for(int i=0;i<n;i++)//查看行方向是否可以消除
	{
		int count1=1;
	
		for(int j=1;j<m;j++)
		{
		
			if(a[i][j]==a[i][j-1])
			{
				count1++;
				if(count1>3){
					b[i][j]=0;
				}
			}
			else
			{
				count1=1;
			}
				if(count1==3&&a[i][j]==a[i][j-1])
				{
					b[i][j]=b[i][j-1]=b[i][j-2]=0;
				}

				
			
			

		}
	}

	for(int j=0;j<m;j++)//查看列方向是否可以消除
	{
			int count2=1;
		for(int i=0;i<n;i++)
		{
			if(a[i][j]==a[i-1][j])
			{
				count2++;
				if(count2>3)
				{
					b[i][j]=0;
				}
			}
			else
			{
				count2=1;
			}

				if(count2==3&&a[i][j]==a[i-1][j])
				{
					b[i][j]=b[i-1][j]=b[i-2][j]=0;
				}


		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}


	return 0;
}
