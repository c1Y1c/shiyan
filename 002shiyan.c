#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//������
//����
//���ֵ
void test01()
{
	srand((unsigned)time(NULL)); //���������
	int num = rand() % 100 + 1, guess, count = 0;
	do
	{
		count++;
		printf("������һ������(1-100):");
		scanf("%d", &guess);
		if (guess > num) printf("̫����.\n");
		else if (guess < num) printf("̫С��.\n");
		else
		{
			printf("��ϲ��¶���.\n");
			printf("��һ������%d��.\n", count);
			break;
		}
	} while (guess != -1);
}
void test02()
{
	int a, b, count = 0;
	printf("������������䣺");
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d������\n", i);
			count++;
		}
		else if (i % 400 == 0)
		{
			printf("%d������\n", i);
			count++;
		}
	}
	printf("һ����%d������\n", count);
}
void test03()
{
	int a;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0) printf("%d��������\n", a);
	else if (a % 400 == 0) printf("%d��������\n", a);
	else printf("%d�겻������\n", a);
}
void test04()
{
	int a, max;
	for (int i = 1; i <= 5; i++)
	{
		printf("�������%d����:", i);
		scanf("%d", &a);
		if (i == 1) max = a;
		if (a == 0) break;
		else max = (max > a ? max : a);
	}
	printf("�������ǣ�%d\n", max);
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
