#include <stdio.h>

int main()
{
    int i=0;
    char a[5];
    printf("逐个输入字符：\n");
    for(i=0;i<5;i++)
    {
        a[i]=getchar();
    }
    printf("逐个输出字符：\n");
    for(i=0;i<5;i++)
    {
        putchar(a[i]);
    }

    return 0;
}

