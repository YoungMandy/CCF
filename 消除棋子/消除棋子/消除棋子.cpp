// ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n,m;//n��m��
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

	for(int i=0;i<n;i++)//�鿴�з����Ƿ��������
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

	for(int j=0;j<m;j++)//�鿴�з����Ƿ��������
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
