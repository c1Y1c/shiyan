#include<stdio.h>
#include<stdlib.h>
//ָ���������
//ָ����������
//ָ��ѡ������
void test01()
{
    int arr[5] = {9,9,9,6,6};
    int *p;
    printf("��1�ַ�ʽ����\n");
    for(int i = 0; i < 5; i++) printf("%d", arr[i]);
    printf("\n��2�ַ�ʽ����\n");
    p = arr;
    for(int i = 0; i < 5; i++)
    {
        printf("%d", *p);
        p++;
    }
    printf("\n��3�ַ�ʽ����\n");
    p = arr;
    for(int i = 0; i < 5; i++) printf("%d", p[i]);
    printf("\n��4�ַ�ʽ����\n");
    for(int i = 0; i < 5; i++) printf("%d", *(arr+i));
    printf("\n��5�ַ�ʽ����\n");
    for(int i = 0; i< 5; i++) printf("%d", *(p+i));
}
void inv(int *p, int n)
{
    int *i = p, *j = p + n - 1, temp;
    while(i < j)
    {
        temp = *i;
        *i = *j;
        *j = temp;
        i++,j--;
    }
}
void test02()
{
    int a[10] ={4,2,6,8,7,3,1,0,9,1};
    printf("����ǰ����:\n");
    for(int i = 0; i < 10; i++) printf("%d ", a[i]);
    inv(a, 10);
    printf("\n����������:\n");
    for(int i = 0; i < 10; i++) printf("%d ", a[i]);
}
void PickSort(int *p, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(*(p + j) < *(p + min))
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = *(p + i);
            *(p + i) = *(p + min);
            *(p + min) = temp;
        }
    }
}
void test03()
{
    int a[10];
    printf("������10������:");
    for(int i = 0; i < 10; i++) scanf("%d", &a[i]);
    PickSort(a, 10);
    for(int i = 0; i < 10; i++) printf("%d", a[i]);
}
int main()
{
    //test01();
    //test02();
    test03();
    system("pause");
    return 0;
}