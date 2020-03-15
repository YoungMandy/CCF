// Z字形扫描.cpp : 定义控制台应用程序的入口点。
//(i+j)为奇数时走左下方向，为偶数时走右上方向

#include "stdafx.h"
#include<stdio.h>  

int main()
{
	int a[500][500];//保存输入矩阵
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	int i=0,j=0;
	do{
		printf(" ");
		printf("%d",a[i][j]);
		if((i+j)%2==0)//和为偶数，走右上方向
		{
			if(i==0&&j<n-1)
			{
				j++;
			}
			else if(j==n-1)
			{
				i++;
			}
			else{
				i--;
				j++;
			}

		}else{//和为奇数，走左下方向
			if(j==0&&i<n-1)
			{
				i++;
			}
			else if(i==n-1)
			{
				j++;
			}
			else{
				i++;
				j--;
			}
		}


	}while(i<n&&j<n);


    return 0;  
}  
