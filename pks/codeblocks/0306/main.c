#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[5];
    char address[30];
    int age;

};

int main()
{
    struct Person p1;

    strcpy(p1.name,"무명");
    p1.age = 19;
    strcpy(p1.address,"서울시");

    printf("이름 : %s\n",p1.name);
    printf("주소 : %s\n",p1.address);
    printf("나이 : %d\n",p1.age);

    return 0;
}
