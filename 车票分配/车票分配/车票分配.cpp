// ��Ʊ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int a[20][6];//��6�д汾�еĿ�λ����
	int n;//ָ����
	int p;//Ʊ��
	int start;//��ʼ��λ��
	int flag=0;//����ѡ���Ϊ0
	scanf("%d",&n);
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(j==5)
				a[i][j]=5;
			else
				a[i][j]=1;//��λ�ñ��Ϊ0
		}
	}

	while(n--){
		scanf("%d",&p);
		int y=0;
		for(int x=0;x<20;x++)
		{
			if(p<=a[x][5])
			{
				flag=1;
				start=5-a[x][5];
				a[x][5]-=p;
				while(p){
					a[x][start+y]=0;
					printf("%d ",x*5+start+y+1);
					y++;
					p--;
				}
				printf("\n");
				break;
			}
		}

			if(flag==0)
			{
				for(int i=0;i<20;i++)
				{
					for(int j=0;j<5;j++)
					{
						if(a[i][j]==1)
						{
							printf("%d ",i*5+j+1);
							a[i][j]==0;
							a[i][5]--;
							p--;
						}
						if(p==0)
							break;
					}
				}
			}
			
	}
		
return 0;
}

			
