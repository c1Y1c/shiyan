#include<stdio.h> 
#include<stdlib.h>
void test01()
{
    printf("������ʮ������:");
    int a[10], count = 10;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        for (int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                count--;
                break;
            }
        }
    }
    printf("һ����%d����ͬ������\n", count);
    printf("����������:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[9 - i]);
    } 

}
void test02()
{
    char str1[100], str2[100];
    printf("�������ַ���1:");
    scanf("%s", str1);
    printf("�������ַ���2:");
    scanf("%s", str2);
    int i = 0, j = 0;
    while(str1[i] != '\0') i++;
    while(str2[j] != '\0') j++;
    for(int k = 0; k < j + 1; i++, k++) str1[i] = str2[k];
    printf("���Ӻ���ַ���Ϊ:%s", str1);
}
void test03()
{
    printf("���������ε��ϵ��µ׺͸�:");
    float a, b, h;
    scanf("%f%f%f", &a, &b, &h);
    printf("���ε����Ϊ:%.2f", (a + b) * h / 2.0);
}
int main()
{
    //test01();
    //test02();
    test03();
    system("pause");
    return 0;
}
