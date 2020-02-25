//
//  1932.c
//  C Xcode
//
//  Created by 김종혁 on 2020/02/25.
//  Copyright © 2020 김종혁. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    int i;
    int j=0;
    int k=0;
    int *value = NULL;
    int result=0;
    
    printf("값 입력: ");
    scanf("%d", &input);
    
    for(i=1;i<=input;i++)
        j+=i;
    
    value = (int*)malloc(sizeof(int)*j);
    
    for(i=0;i<j;i++)
        scanf("%d", &value[i]);
    
    
    for(i=0;i<input-1;i++)    // n-1번
    {
        for(k=1;k<=2;k++)
        {
            
        }
    }
    
    
    
    
    return 0;
}


/*
 
 for(i=0;i<input-1;i++)
    {
        for(j=i;j<i+2;j++)
        {
            result += value[i+1+j];
        }
    }
 */
