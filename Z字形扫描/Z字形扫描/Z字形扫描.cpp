// Z����ɨ��.cpp : �������̨Ӧ�ó������ڵ㡣
//(i+j)Ϊ����ʱ�����·���Ϊż��ʱ�����Ϸ���

#include "stdafx.h"
#include<stdio.h>  

int main()
{
	int a[500][500];//�����������
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	int i=0,j=0;
	do{
		printf(" ");
		printf("%d",a[i][j]);
		if((i+j)%2==0)//��Ϊż���������Ϸ���
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

		}else{//��Ϊ�����������·���
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
