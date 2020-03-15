// 打酱油.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);

	int x1,x2,x3;
	x1=(n/10)/5;
	x2=((n-x1*5*10)/10)/3;
	x3=(n-x1*5*10-x2*3*10)/10;
	sum=x1*(5+2)+x2*(3+1)+x3;

	printf("%d",sum);
	return 0;
}

