#include <stdio.h>
#include <string.h>

int login(char code);

int main()
{
    char code[50] = {0};
    gets(code);
    login(code);

    return 0;   
}

int login(char code)
{
    int trfa = strcmp(code,"admin");

    if(trfa == 0)
    {
        puts("login succeed");
    }
    else
    {
        puts("login failed");
    }
}
