#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//����ת����
//һԪ���η������
//������ü���
void test01()
{
	char grade;
	scanf("%c", &grade);
	printf("��ķ���:");
	switch (grade)
	{
	case 'A': printf("85~100\n"); break;
	case 'B': printf("70~84\n"); break;
	case 'C': printf("60~69\n"); break;
	case 'D': printf("<60\n"); break;
	default: printf("�������\n");
	}
}
void test02()
{
   	int a, b, c;
	printf("��ֱ�����ϵ��(����):");
	scanf("%d%d%d", &a, &b, &c);
	int PanBie;
	PanBie = b * b - 4 * a * c;
	if (PanBie > 0)
	{
		printf("������ʵ����:\n");
		printf("X1=%.2f\n", (-b + sqrt(PanBie)) / (2.0 * a));
		printf("X2=%.2f\n", (-b - sqrt(PanBie)) / (2.0 * a));
	}
	else if (PanBie == 0)
	{
		printf("�������ʵ����:\n");
		printf("X1=X2=%.2f\n", (-b) / (2.0 * a));
	}
	else
	{
		printf("������������:\n");
		float s = (-b) / (2.0 * a);
		if(s == 0)
		{
			printf("X1=%.2fi\n", sqrt(-PanBie) / (2.0 * a));
			printf("X2=-%.2fi\n", sqrt(-PanBie) / (2.0 * a));
		}
		else
		{
			printf("X1=%.2f+%.2fi\n", (-b) / (2.0 * a), sqrt(-PanBie) / (2.0 * a));
			printf("X2=%.2f-%.2fi\n", (-b) / (2.0 * a), sqrt(-PanBie) / (2.0 * a));
		}
	}
}
void test03()
{
	int c, s;
	float p ,w ,d, f;
	printf("�����뵥�ۡ�����������:");
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
	printf("���˷�=%.2f\n", f);
}
int main()
{ 
	//test01();
	test02();
	//test03();
	system("pause");
	return 0;
}