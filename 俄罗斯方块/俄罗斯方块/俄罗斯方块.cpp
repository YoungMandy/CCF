// ����˹����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>
int main()
{
	 int a[15][10];
	 int b[4][4];
	 int offset=0;//ƫ����
	 int col[4]={14,14,14,14};//ÿ�е������к�Ĭ��Ϊ14
	 int c[4]={-15,-15,-15,-15};
	 int loc;
	for(int i=0;i<15;i++)
		for(int j=0;j<10;j++)
			scanf("%d",&a[i][j]);

	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&b[i][j]);

	scanf("%d",&offset);

	//���������λ�ÿ�ʼ����ͼÿ�е����Ŀ��к�
	offset=offset-1;//�����±��0��ʼ
	for(int j=offset;j<offset+4;j++)
	{
		for(int i=0;i<15;i++)
		{
			if(a[i][j]==1)
			{
				col[j-offset]=i-1;
				break;
			}
		}
	}

	//��������ķ�������µķ�����кż������
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<4;i++)
		{
			if(b[i][j]==1)
				c[j]=i;
		}
	}

	// //�ҳ�������col��ȥ�����c�е���Сֵ
			int sub=15;
			for(int j=0;j<4;j++)
			{
				if(col[j]-c[j]<sub)
				{
					sub=col[j]-c[j];
					loc=j;
				}
			}



			int base=col[loc]-c[loc];

			//��������
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<4;j++)
				{
					if(b[i][j]==1)
					{
						a[base+i][offset+j]=1;
					}
				}
			}

			//��������
			for(int i=0;i<15;i++)
			{
				for(int j=0;j<10;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
			}
			return 0;
}