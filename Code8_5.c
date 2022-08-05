#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<assert.h>
#include<string.h>
//char* My_strcopy(char *a,const char *b)
//{
//	assert(a && b);
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	assert((len1-len2)<0);
//	int i = 0;
//	while (b[i] != '\0')
//	{
//		a[i] = b[i];
//		i++;
//	}
//	a[i] = '\0';
//	return a;
//}
//int main()
//{
//	char a[20] = "";
//	char b [] = "abcfcdsldek";
//	My_strcopy(a,b);
//	printf("%s\n",a);
//
//	return 0;
//}
//int main()
//{
// volatile const int num = 0;
//	int* p = (int*)&num;
//	 *p = 20;
//	 int z = num + 10;
//	printf("%d\n",z);
//	return 0;
//}
//题目：

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void Swap(int* a, int* b)
//{
//	int tmp = *b;
//	*b = *a;
//	*a = tmp;
//}
//void Printf_Arr(const int* a, int len)
//{
//	assert(a);
//	for (int i = 0; i < len; i++)
//		printf("%d ",a[i]);
//}
//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//		scanf("%d",arr+i);
//	int left = 0;
//	int right = n - 1;
//	while (left<right)
//	{
//		while ((left<right)&&arr[left] % 2)
//			left++;
//		while ((left < right)&&(!(arr[right] % 2)))
//			right--;
//		Swap(arr+left,arr+right);
//	}
//	Printf_Arr(arr,n);
//	return 0;
//}
//char* my_strcpy(char*dest,const char*str)
//{
//	assert(dest&&str);
//	int len1 = strlen(dest);
//	int len2 = strlen(str);
//	assert((len1-len2)>=0);
//	while (*dest++ = *str++);
//	return dest;
//}
//int main()
//{
//	char a[] = "*************";
//	char b[] = "I love China!";
//	my_strcpy(a,b);
//	printf("%s\n",a);
//	return 0;
//}
//unsigned int my_strlen(const char *str)
//{
//	assert(str);
//	int len = 0;
//	while (*(str+len++));
//	return --len;
//}
//int main()
//{
//	char a[] = "I love China!";
//	unsigned int len=my_strlen(a);
//	printf("%u\n",len);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int* a = (int*)malloc(sizeof(int) * n);
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    int flag1 = 1;
//    int flag2 = 1;
//    for (int i = 0; i < n - 1; i++)
//        if (a[i] > a[i + 1])
//        {
//            flag1 = 0;
//            break;
//        }
//
//    for (int i = 0; i < n - 1; i++)
//        if (a[i] < a[i + 1])
//        {
//            flag2 = 0;
//            break;
//        }
//
//    if (flag1 == 1 || flag2 == 1)
//        puts("sorted");
//    else
//        puts("unsorted");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 1;
//    int max = 0;
//    int min = 0;
//    scanf("%d", arr);
//    max = min = arr[0];
//    while (i < n)
//    {
//        scanf("%d", arr + i);
//        if (max < arr[i])
//            max = arr[i];
//        if (min > arr[i])
//            min = arr[i];
//        i++;
//    }
//    printf("%d\n", max - min);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int a[N + 1];
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", a + i);
//    }
//    int prev = N - 1;
//    int end = N;
//    int key = 0;
//    scanf("%d", &key);
//    while (prev >= 0)
//    {
//        if (a[prev] > key)
//        {
//            a[end] = a[prev];
//            end = prev;
//            prev--;
//        }
//        else
//            break;
//    }
//    a[end] = key;
//    for (int i = 0; i < N + 1; i++)
//        printf("%d ", a[i]);
//    return 0;
//}
/*nt main()
{
	printf("Hello World!\n");
	return 0;
}*/
//#include<time.h>
//long long fun(long long n)
//{
//	if (n <= 2)
//		return 1;
//	return fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	clock_t start=clock();
//	long long ret = fun(6000000000000);
//	clock_t end=clock();
//	printf("%lfs\n",((double)end-start)/CLOCKS_PER_SEC);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//void show()
//{
//	printf("Hello World!\n");
//}
//int main()
//{
//	show();
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("哈哈\n");
//	}
//
//	for (int j = 0; j < 10; j++)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int i=0;
	print("%d\n",i);
	return 0;
}