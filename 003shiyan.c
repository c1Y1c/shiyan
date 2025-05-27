#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//评分转分数
//一元二次方程求解
//运输费用计算
void test01()
{
	char grade;
	scanf("%c", &grade);
	printf("你的分数:");
	switch (grade)
	{
	case 'A': printf("85~100\n"); break;
	case 'B': printf("70~84\n"); break;
	case 'C': printf("60~69\n"); break;
	case 'D': printf("<60\n"); break;
	default: printf("输入错误！\n");
	}
}
void test02()
{
   	int a, b, c;
	printf("请分别输入系数(整数):");
	scanf("%d%d%d", &a, &b, &c);
	int PanBie;
	PanBie = b * b - 4 * a * c;
	if (PanBie > 0)
	{
		printf("有两个实数解:\n");
		printf("X1=%.2f\n", (-b + sqrt(PanBie)) / (2.0 * a));
		printf("X2=%.2f\n", (-b - sqrt(PanBie)) / (2.0 * a));
	}
	else if (PanBie == 0)
	{
		printf("有两相等实数解:\n");
		printf("X1=X2=%.2f\n", (-b) / (2.0 * a));
	}
	else
	{
		printf("有两个复数解:\n");
		float s = (-b) / (2.0 * a);
		if(s == 0)
		{
			printf("X1=%.2fi\n", sqrt(-PanBie) / (2.0 * a));
			printf("X2=-%.2fi\n", sqrt(-PanBie) / (2.0 * a));
		}
		else
		{
			printf("X1=%.2f+%.2fi\n", (-b) / (2.0 * a), sqrt(-PanBie) / (2.0 * a));
			printf("X2=-%.2f-%.2fi\n", (-b) / (2.0 * a), sqrt(-PanBie) / (2.0 * a));
		}
	}
}
void test03()
{
	int c, s;
	float p ,w ,d, f;
	printf("请输入单价、重量、距离:");
	scanf("%f%f%d", &p, &w, &s);
	if(s > 3000) c = 12;
	else c = s / 250;
	switch(c)
	{
		case 0: d = 0;break;
		case 1: d = 2;break;
		case 2:
		case 3: d = 5;break;
		case 4:
		case 5:
		case 6:
		case 7: d = 8;break;
		case 8:
		case 9:
		case 10:
		case 11: d = 10;break;
		case 12: d = 15;break;
	}
	f = p * w * s * (1 - d / 100);
	printf("总运费=%.2f\n", f);
}
int main()
{ 
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
