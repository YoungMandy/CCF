// ����Կ�׺�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int n,k;//nΪ��������,kΪ��ʦ����
	scanf("%d%d",&n,&k);
	int key[1000];//Կ������
	static int ret[1000];//�黹����
	int teacher[1000][4];//��¼��ʦ��Ϣ�����һ��Ϊ�黹Կ�׵�ʱ��
	da
	for(int i=0;i<n;i++)//��ʼ��Կ������
	{
		key[i]=i+1;
	}

	for(int i=0;i<k;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&teacher[i][j]);//��¼��ʦ��Ϣ teacher[i][0]ΪԿ�ױ�ţ�teacher[i][1]Ϊ��ʼ�Ͽ�ʱ�䣬teacher[i][2]Ϊ�Ͽ�ʱ��
		}
		teacher[i][3]=teacher[i][1]+teacher[i][2];//����黹Կ�׵�ʱ��
	}

	
	int time=1,max=0;//timeΪ��������maxΪ��ٹ黹ʱ��
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

		for(int i=0;i<n;i++)//���黹���д�С��������
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

		for(int i=0;i<k;i++)//�ȹ黹Կ��
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

		for(int i=0;i<k;i++)//�ٴα�����ʦ��Ϣ���鿴��û��ҪȡԿ�׵�
        {     
			if(teacher[i][1]==time)
			{
                 for(int j=0;j<n;j++)
                      if(key[j]==teacher[i][0])
                           key[j]=0;//�У������Կ�׺У�ȡ��Կ��
              }
		}
            time++; //��һʱ��    
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",key[i]);
		printf(" ");
	}

	return 0;
}

