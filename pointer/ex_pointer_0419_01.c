#include <stdio.h>

void change(int *s1, int *s2);

int main()
{
    int x,y;
    int *p1, *p2;
    printf("请输入两个数：");
    scanf("%d%d", &x,&y);
    p1=&x, p2=&y;
    printf("交换前: x=%d, y=%d\n", x, y);
    change(p1,p2);
    printf("交换后: x=%d, y=%d\n", x, y);

    return 0;
}

void change(int *s1, int *s2)
{
    int t;
    t=*s1;
    *s1=*s2;
    *s2=t;
}
