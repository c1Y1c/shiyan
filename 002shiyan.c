#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//猜数字
//闰年
//最大值
void test01()
{
	srand((unsigned)time(NULL)); //随机数种子
	int num = rand() % 100 + 1, guess, count = 0;
	do
	{
		count++;
		printf("请输入一个整数(1-100):");
		scanf("%d", &guess);
		if (guess > num) printf("太大了.\n");
		else if (guess < num) printf("太小了.\n");
		else
		{
			printf("恭喜你猜对了.\n");
			printf("你一共猜了%d次.\n", count);
			break;
		}
	} while (guess != -1);
}
void test02()
{
	int a, b, count = 0;
	printf("请输入年份区间：");
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d是闰年\n", i);
			count++;
		}
		else if (i % 400 == 0)
		{
			printf("%d是闰年\n", i);
			count++;
		}
	}
	printf("一共有%d个闰年\n", count);
}
void test03()
{
	int a;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0) printf("%d年是闰年\n", a);
	else if (a % 400 == 0) printf("%d年是闰年\n", a);
	else printf("%d年不是闰年\n", a);
}
void test04()
{
	int a, max;
	for (int i = 1; i <= 5; i++)
	{
		printf("请输入第%d个数:", i);
		scanf("%d", &a);
		if (i == 1) max = a;
		if (a == 0) break;
		else max = (max > a ? max : a);
	}
	printf("最大的数是：%d\n", max);
}
int main()
{
	test01();
	//test02();
	//test03();
	//test04();
	system("pause");
	return 0;
}
