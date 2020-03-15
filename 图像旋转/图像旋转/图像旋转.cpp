// 图像旋转.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
int a[1005][1005];  
int main() {  
      
    int m,n;  
    scanf("%d%d",&n,&m);  
    int i,j;  
    for (i=0;i<n;i++)   
        for (j=0;j<m;j++)  
           scanf("%d",&a[i][j]);  
    for (j=m-1;j>=0;j--) {  
        for (i=0;i<n;i++) {  
            if (i) 
				printf(" ");  
            printf("%d",a[i][j]);  
        }                 
        printf("\n");  
    }  
    return 0;  
} 

