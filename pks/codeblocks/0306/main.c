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

    strcpy(p1.name,"����");
    p1.age = 19;
    strcpy(p1.address,"�����");

    printf("�̸� : %s\n",p1.name);
    printf("�ּ� : %s\n",p1.address);
    printf("���� : %d\n",p1.age);

    return 0;
}
