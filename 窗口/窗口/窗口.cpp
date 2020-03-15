// 窗口.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
 
struct node  
{  
    int num;  
    int x1;  
    int x2;  
    int y1;  
    int y2;  
}a[15];  
int main()  
{  
    int n,m;  
    scanf("%d%d",&n,&m);  
    for(int i=1; i<=n; i++)  
    {  
        a[i].num = i;  
        scanf("%d%d%d%d",&a[i].x1,&a[i].y1,&a[i].x2,&a[i].y2);  
    }  
    node b;  
    int x,y; 
 
    while(m--)  
    {  
        scanf("%d%d",&x,&y);  
        int j;  
        for(j=n; j>=1; j--)  
        {  
            if(x >= a[j].x1 && x <= a[j].x2 && y >= a[j].y1 && y <= a[j].y2)  
            {  
                b = a[j];  
                printf("%d\n",a[j].num);//应该是先输出，不然后面的次序改了   
                for(int k=j; k<n; k++)  
                {  
                    a[k] = a[k+1];  
                }  
                a[n] = b;  
                break;        
            }  
        }  
        if(j == 0)  
            printf("IGNORED\n");  
     }   
    return 0;  
}  