// ISBN号码.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sum=0;
	char str[14];
	
	int i=0;
	int num;
	while((str[i]=getchar())!='\n')
		i++;
	str[i]='\0';

	sum=str[0]*0+str[2]*2+str[3]*3+str[4]*4+str[6]*5+str[7]*6+str[8]*7+str[9]*8+str[10]*9;

	if(str[12]=='X')
	{
		num=10;
	}
	else
	{
		num=str[12]-'0';
	}
	
	int temp=sum%11;

	if(temp==num)
	{
		printf("Right");
	}
	else
	{
		char a[2];
		itoa(temp,a,10);
		str[12]=a[0];
		for(i=0;i<13;i++)
			putchar(str[i]);
	}
	return 0;
}

