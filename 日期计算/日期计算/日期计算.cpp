// 日期计算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int y,d;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	int day;
	scanf("%d",&y);
	scanf("%d",&d);

	if((y%400==0)||(y%4==0&&y%100!=0))
	{
		a[2]=29;
	}
		for(int i=1;i<13;i++)
		{
			
			if(sum+a[i]>=d)
			{
				day=d-sum;
				printf("%d\n",i);
				printf("%d\n",day);
				break;

			}
			else{
				sum+=a[i];
			}
			
		}

	return 0;
}

