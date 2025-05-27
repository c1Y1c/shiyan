#include<stdio.h>
#include<stdlib.h>
//分段函数的计算
//分数转评分
//数字逆序及统计位数
void test01()
{
    float x;
    scanf("%f", &x);
    if(x < 1) printf("y=x=%.2f\n", x);
    if(x >= 1 && x <= 10) printf("y=2x-1=%.2f\n", 2 * x - 1);
    if(x > 10) printf("y=3x-11=%.2f\n", 3 * x - 11);
}
void test02()
{
    float a;
    scanf("%f", &a);
    if(a >= 90) printf("A\n");
    if(a >= 80 && a < 89) printf("B\n");
    if(a >= 70 && a < 79) printf("C\n");
    if(a >= 60 && a < 69) printf("D\n");
    if(a < 60) printf("E\n");
}
void test03()
{
    int num, count = 0;
    scanf("%d", &num);
    int a = num;
    printf("逆序数字:");
    while(a)
    {
        printf("%d", a % 10);
        count++;
        a = a / 10;
    }
    printf("\n数字位数:%d\n", count);

}
int main()
{
    test01();
    //test02();
    //test03();
    system("pause");
    return 0;
}