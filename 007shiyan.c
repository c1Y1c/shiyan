#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//插入空格
//阶乘和
//汉诺塔
void test01()
{
   int num, temp, a[4];
   scanf("%d", &num);
   for(int i = 0; i < 4; i++)
   {
        a[i] = num % 10;
        num = num / 10;
   }
   printf("插入空格后：");
   for(int i =3; i >=0; i--) printf("%d ", a[i]);
   printf("\n");
}
void test01pro()
{
    char str[80];
    scanf("%s",str);
    for(int i = strlen(str); i > 0; i--)
    {
        str[2 * i] = str[i];
        str[2 * i -1] = ' ';
    }   
    printf("%s\n",str);
}
long long fact(int n)
{
    if(n == 1) return 1;
    else return (fact(n-1) * n);
}
void test02()
{
    long long fval = 0;
    int n;
    printf("请输入整数n:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
       fval = fval + fact(i);
    }
    printf("%lld\n", fval);
}
void move(int n, char i, char j, char k)
{
    if(n == 1) printf("%c->%c\n", i, k);
    else
    {
        move(n - 1, i, k, j);
        move(1, i, j, k);
        move(n- 1, j, i, k);
    }
}
int main()
{

    int n;
    printf("请输入数量:");
    scanf("%d", &n);
    char A = 'A', B = 'B',C = 'C';
    move(n, A, B, C);
    //test01();
    //test01pro();
    //test02();
    system("pause");
    return 0;
}