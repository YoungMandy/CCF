// �Ŷ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
int find(int a[],int p);
void swap(int b[],int x , int y );
int i,n,change;
int a[1000];
int p,q,index;
int main()
{
	
	scanf("%d%d",&n,&change);//��ȡѧ�������͸ı����
	
	for(i=0;i<n;i++)//��ʼ������
	{
		a[i]=i+1;
	}

	for(int k=0;k<change;k++)
	{

		scanf("%d%d",&p,&q);//��ȡѧ��ѧ�ź��ƶ�����
		find(a,p);
			if(q>0)//����
			{
				while(q!=0)
					{
						swap(a,index,index+1);
						index++;
						q--;
					}	

			}
			if(q<0)//ǰ��
			{
				while(q!=0)
				{
					swap(a,index,index-1);
					index--;
					q++;
				}
			}
	}

		for(int g=0;g<n;g++)
		{
			printf("%d\t",a[g]);
		}
	return 0;
}

int find(int a[],int p)
{
	for( int j=0;j<n;j++)
	{
		if(a[j]==p)
		{
			index=j;//Ѱ�ҵ�ѧ������λ��
			return index;
		}
	}
	return -1;
}

void swap(int a[] ,int x , int y )
{
	int xx=a[x];
	int yy=a[y];
	a[x]=yy;
	a[y]=xx;
}

	