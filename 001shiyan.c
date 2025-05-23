#include<stdio.h>
#include<stdlib.h>
//打印输出“Hello World.”
//打印输出乘法口诀表
//打印输出实心菱形和空心菱形
void test01()
{
    printf("Hellow World.\n");
    printf("我是曹越\n");
}
void test02()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
}
void test03()
{
    for (int i = 9; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
}
void test04()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j <= 7 - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = 6; i > 0; i--)
    {
        for (int j = 1; j <= 7 - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}
void test05()
{
    for (int i = 1; i < 8; i++)
    {
        for (int j = 1; j <= 7 - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for (int i = 6; i > 0; i--)
    {
        for (int j = 1; j <= 7 - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    //test01();  
    //test02();
    //test03();
    //test04();
    //test05();
    system("pause");
    return 0;
}