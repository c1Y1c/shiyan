#include<stdio.h>
#include<stdlib.h>
void test01()
{
    float x;
    scanf("%f", &x);
    if(x < 1) printf("y=x=%.2f", x);
    if(x >= 1 && x <= 10) printf("y=2x-1=%.2f", 2 * x - 1);
    if(x > 10) printf("y=3x-11=%.2f", 3 * x - 11);
}
void test02()
{
    float a;
    scanf("%f");
    if(a >= 90) printf("A");
    if(a >= 80 && a < 89) printf("B");
    if(a >= 70 && a < 79) printf("C");
    if(a >= 60 && a < 69) printf("D");
    if(a < 60) printf("E");
}
void test03()
{
    int num, count = 0;
    scanf("%d", &num);
    int a = num;
    printf("逆序数字:");
    while(a != 0)
    {
        printf("%d", a % 10);
        count++;
        a = a / 10;
    }
    printf("\n数字位数:%d\n", count);

}
int main()
{
    //test01();
    test03();
    system("pause");
    return 0;
}