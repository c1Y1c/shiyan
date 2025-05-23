#include<stdio.h> 
#include<stdlib.h>
void test01()
{
    printf("请输入十个数据:");
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
    printf("一共有%d个不同的数据\n", count);
    printf("倒序后的数据:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[9 - i]);
    } 

}
void test02()
{
    char str1[100], str2[100];
    printf("请输入字符串1:");
    scanf("%s", str1);
    printf("请输入字符串2:");
    scanf("%s", str2);
    int i = 0, j = 0;
    while(str1[i] != '\0') i++;
    while(str2[j] != '\0') j++;
    for(int k = 0; k < j + 1; i++, k++) str1[i] = str2[k];
    printf("连接后的字符串为:%s", str1);
}
void test03()
{
    printf("请输入梯形的上底下底和高:");
    float a, b, h;
    scanf("%f%f%f", &a, &b, &h);
    printf("梯形的面积为:%.2f", (a + b) * h / 2.0);
}
int main()
{
    //test01();
    //test02();
    test03();
    system("pause");
    return 0;
}
