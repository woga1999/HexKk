//
//  1932.c
//  C Xcode
//
//  Created by 김종혁 on 2020/02/25.
//  Copyright © 2020 김종혁. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void isat(int* array, int input, int current)   // 왔다리 갔다리
{
    int i, j;
    
    for(i=1;i<input;i++)  // 반복횟수
    {
        for(j=input-1;j<=input;j++) // 차이
        {
            //array[current+j];
        }
    }
}

int main(void)
{
    int input;
    int i;
    int j=0;
    int k=0;
    int *value = NULL;
    int result=0;
    int current=0;
    
    printf("값 입력: ");
    scanf("%d", &input);
    
    for(i=1;i<=input;i++)
    {
        j+=i;
    }
    
    value = (int*)malloc(sizeof(int)*j);
    
    for(i=0;i<j;i++)
        scanf("%d", &value[i]);
    
    
    
    // input: 2 -> 3 -> 4
    
    
    for(i=2;i<=input;i++)    // n-2번 건너뛰기
    {
        isat(value, i, k);
        k+=i;
        current++;
    }
    
    
    free(value);
    
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
