#include<stdio.h>
#include<stdlib.h>
//数组逆序存放
//选择排序法
//杨辉三角
void test01()
{
    int arr[5];
    for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);
    int left = 0, right = 4;
    while(left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++, right--;
    }
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
}
void test02()
{
    int arr[5];
    for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < 4; i++) 
    {
        int min = i;
        for(int j = i + 1; j < 5;j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
            
        }
        if(min != i)
        {
            int temp =arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }    
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
}
void test03()
{
    int arr[10][10] = {0};
    for(int i = 0; i < 10; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    for(int i = 2; i < 10; i++)
    {
        for(int j = 1; j <= i; j++) 
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    //test01();
    //test02();
    test03();
    system("pause");
    return 0;
}