#include <stdio.h>

void calc(int q,int w,char gi);

int main()
{
    int a=0;
    int b=0;
    char giho = 0;

    calc(a,b,giho);

    return 0;
}

void calc(int q,int w, char gi)
{
    while(1)
    {
    printf("계산할 숫자들을 입력하여 주세요!\n");
    scanf("%d %d",&q,&w);
    printf("계산 기호를 입력하여 주세요!\n");
    scanf("%c",&gi);

    switch(gi)
    {
        case '+' :
            printf("%d + %d = %d\n",q,w,q+w);
        case '-' :
            printf("%d - %d = %d\n",q,w,q-w);
        case '*' :
            printf("%d * %d = %d\n",q,w,q*w);
        case '/' :
            printf("%d / %d = %d\n",q,w,q/w);
        default :
            printf("식별 불가 문자입니다\n");
    }
    }

   
}