// ˰ǰ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
int f(int);//���㽻˰

int main()
{
	int T,S;
	scanf("%d",&T);//����˰������

	if(T<=3500)
	{
		S=T;//���ý�˰
	}
	else{
		for(int i=3600;i<=100000;i+=100)
		{
			if(f(i-3500)==(i-T))
				S=i;
		}
	}

	printf("%d",S);

	return 0;
}

int f(int x)
{
	if(x>0&&x<=1500) return (x*0.03);
	else if(x>1500&&x<=4500) return (45+(x-1500)*0.1);
	else if(x>4500&&x<=9000) return (345+(x-4500)*0.2);
	else if(x>9000&&x<=35000) return (1245+(x-9000)*0.25);
	else if(x>35000&&x<=55000) return (7745+(x-35000)*0.3);
	else if(x>55000&&x<=80000) return (13745+(x-55000)*0.35);
	else if(x>80000) return (22495+(x-80000)*0.45);
}