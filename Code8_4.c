#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//void fun(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; i++)
//		count++;
//	for (int k = 0; k < N; k++)
//		count++;
//	int M = 10;
//	while (M--)
//		count++;
//}
//void fun1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//
//		for (int j = 0; j < N; j++)
//			count++;
//	}
//}
//void fun2(int *a,int N)
//{
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//void fun3(int N,int M)
//{
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		count++;
//	}
//	for (int j = 0; j < M; j++)
//		count++;
//}
//
//char* my_strchr(const char* str1, const char s)
//{
//	if (str1 == NULL)  
//	{
//		return NULL;
//	}
//	while (*str1 != s && *str1)
//	{
//		str1++;
//	}
//	if (*str1 != '\0')
//		return (char*)str1;
//	else
//		return NULL;
//}
//void fun5(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ",n);
//		return;
//	}
//	fun5(n/10);
//	printf("%d ",n%10);
//}
//
//int fun6(int n)
//{
//	if (n <= 2)
//		return 1;;
//	return fun6(n - 1) + fun6(n - 2);
//}
//int main(void)
//{
//	printf("%d\n",fun6(10));
//	return 0;
//}
// 序列中整数去重
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int a[50] = { 1 };
//	for (int i = 0; i < n; i++)
//		scanf("%d",&a[i]);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				a[j] = -1;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] != -1)
//			printf("%d ",a[i]);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[100];
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	int x = 0;
//	scanf("%d", &x);
//	int count = 0;
//	for (int j = 0; j < n; j++)
//	{
//		if (a[j] == x)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a[100] = { 1 };
//	while (EOF != scanf("%d", &n))
//	{
//		int i = 2;
//		for (i = 2; i < n; i++)
//		{
//			a[i] = i;
//		}
//		int count = 0;
//		for (int j = 2; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				
//				if (a[k] % j == 0)
//				{
//					a[k] = 0;
//				}
//			}
//		}
//		for (int p = 2; p < n; p++)
//		{
//			if (a[p] != 0)
//			{
//				count++;
//				printf("%d ", a[p]);
//			}
//		}
//		printf("\n%d\n",n-1-count);
//	}
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int a1[n][m];
//	int a2[n][m];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &a1[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &a2[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a1[i][j] != a2[i][j])
//			{
//				printf("No\n");
//				return 0;
//			}
//		}
//	}
//	printf("Yes\n");
//	return 0;
//}