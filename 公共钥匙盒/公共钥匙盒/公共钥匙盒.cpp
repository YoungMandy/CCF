// 公共钥匙盒.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n,k;//n为教室数量,k为教师数量
	scanf("%d%d",&n,&k);
	int key[1000];//钥匙数组
	static int ret[1000];//归还数组
	int teacher[1000][4];//记录教师信息，最后一列为归还钥匙的时间
	da
	for(int i=0;i<n;i++)//初始化钥匙数组
	{
		key[i]=i+1;
	}

	for(int i=0;i<k;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&teacher[i][j]);//记录教师信息 teacher[i][0]为钥匙编号，teacher[i][1]为开始上课时间，teacher[i][2]为上课时长
		}
		teacher[i][3]=teacher[i][1]+teacher[i][2];//计算归还钥匙的时间
	}

	
	int time=1,max=0;//time为计数器，max为最迟归还时间
	for(int i=0;i<k;i++)
	{
		if(teacher[i][3]>max)
			max=teacher[i][3];
	}

	int m=0;
	int temp=0;
	while(time<=max)
	{
		for(int i=0;i<k;i++)
		{
			if(teacher[i][3]==time)
				ret[m++]=teacher[i][0];
		}

		for(int i=0;i<n;i++)//将归还序列从小到大排序
		{
			for(int j=0;j<n-i;j++)
			{
				if(ret[j]>ret[j+1])
				{
					temp=ret[j];
					ret[j]=ret[j+1];
					ret[j+1]=temp;
				}
			}
		}

		for(int i=0;i<k;i++)//先归还钥匙
		{
			if(ret[i]!=0)
			{
				for(int j=0;j<n;j++)
				{
					if(key[j]==0)
					{
						key[j]=ret[i];
						ret[i]=0;
						break;
					}
				}
			}
		}

		for(int i=0;i<k;i++)//再次遍历教师信息，查看有没有要取钥匙的
        {     
			if(teacher[i][1]==time)
			{
                 for(int j=0;j<n;j++)
                      if(key[j]==teacher[i][0])
                           key[j]=0;//有，则更新钥匙盒，取走钥匙
              }
		}
            time++; //下一时刻    
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",key[i]);
		printf(" ");
	}

	return 0;
}

