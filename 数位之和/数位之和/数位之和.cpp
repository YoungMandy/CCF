// 数位之和.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	while(n){
		sum+=n%10;
		n=n/10;
	}

	printf("%d",sum);

	return 0;
}

