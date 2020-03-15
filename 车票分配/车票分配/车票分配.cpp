// 车票分配.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int a[20][6];//第6列存本行的空位置数
	int n;//指令数
	int p;//票数
	int start;//开始的位置
	int flag=0;//不能选标记为0
	scanf("%d",&n);
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(j==5)
				a[i][j]=5;
			else
				a[i][j]=1;//空位置标记为0
		}
	}

	while(n--){
		scanf("%d",&p);
		int y=0;
		for(int x=0;x<20;x++)
		{
			if(p<=a[x][5])
			{
				flag=1;
				start=5-a[x][5];
				a[x][5]-=p;
				while(p){
					a[x][start+y]=0;
					printf("%d ",x*5+start+y+1);
					y++;
					p--;
				}
				printf("\n");
				break;
			}
		}

			if(flag==0)
			{
				for(int i=0;i<20;i++)
				{
					for(int j=0;j<5;j++)
					{
						if(a[i][j]==1)
						{
							printf("%d ",i*5+j+1);
							a[i][j]==0;
							a[i][5]--;
							p--;
						}
						if(p==0)
							break;
					}
				}
			}
			
	}
		
return 0;
}

			
