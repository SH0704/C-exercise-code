#include <stdio.h>

void change(int *s1, int *s2);

int main()
{
    int x,y;
    int *p1, *p2;
    printf("��������������");
    scanf("%d%d", &x,&y);
    p1=&x, p2=&y;
    printf("����ǰ: x=%d, y=%d\n", x, y);
    change(p1,p2);
    printf("������: x=%d, y=%d\n", x, y);

    return 0;
}

void change(int *s1, int *s2)
{
    int t;
    t=*s1;
    *s1=*s2;
    *s2=t;
}
