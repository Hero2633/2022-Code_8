#define  _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
//int main()
//{
//	long double a = 0.0;
//	printf("%zu\n",sizeof(long double));
//	return 0;
//}
//#include<limits.h>
//int main()
//{
//	int max = (-2147483647 - 1);
//	int MAX = -2147483648;
//	return 0;
//}
//int main()
//{
////int a = 1091567616;
////	printf("%f\n",a);
//	int a[] = { 1,2,3 };
//	int b[] = { 2,3,4 };
//	int* ab[] = { a,b };
//	printf("%d\n", sizeof(ab[0]));
//	return 0;
//}
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//int find_num(int(*p)[3], int r, int c, int key)
//{
//	int i = 0;
//	int j = c - 1;
//	while (i < r && j >= 0)
//	{
//		if (i<r && j >= 0 && p[i][j] > key)
//			j--;
//		else if (i < r && j >= 0 && p[i][j] < key)
//			i++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int key = 7;
//	int ret = find_num(arr,3,3,key);
//	if (ret)
//		printf("找到了\n");
//	else
//		printf("没找到\n");
//	return 0;
//}
#include<string.h>

//
//int main()
//{
//	char ch[] = "ABCDEFG";
//	int len = strlen(ch);
//	int k = 0;
//	scanf("%d",&k);
//	k %= len;
//	reversenStr(ch,0,k-1);
//	reversenStr(ch, k, len - 1);
//	reversenStr(ch, 0, len - 1);
//	printf("%s\n",ch);
//	return 0;
//}
	//void reversenStr(char* ch, int left, int right)
	//{
	//	while (left < right)
	//	{
	//		char tmp = ch[left];
	//		ch[left] = ch[right];
	//		ch[right] = tmp;
	//		right--;
	//		left++;
	//	}

	//}
	//int is_same(const char* p1, char* p2)
	//{
	//	int len1 = strlen(p1);
	//	int len2 = strlen(p2);
	//	if (len1 != len2)
	//		return 0;
	//	int k = 0;
	//	while (k < len1)
	//	{
	//		reversenStr(p2, 0, k - 1);
	//		reversenStr(p2, k, len2 - 1);
	//		reversenStr(p2, 0, len2 - 1);
	//		if (!strcmp(p1, p2))
	//			return 1;
	//		k++;
	//	}
	//	return 0;
	//}

	//int main()
	//{
	//	char p1[] = "AABCD";
	//	char p2[] = "aabcd";
	//	int ret=is_same(p1,p2);
	//	if (ret)
	//		printf("same\n");
	//	else
	//		printf("not same\n");
	//	return 0;
	//}
//#include<stdio.h>
#include<string.h>
//int main()
//{
//	char ch[5001];
//	gets(ch);
//	int len = strlen(ch);
//	int end = --len;
//	while (ch[len] != ' ' && len >= 0)
//	{
//		len--;
//
//	}
//	printf("%d\n", end - len);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch[1001];
//	gets(ch);
//	char keu = 0;
//	//getchar();
//	scanf("%c", &keu);
//	char key = 0;
//	if (keu >= 'A' && keu <= 'Z')
//		key = keu + 32;
//	else if (keu >= 'a' && keu <= 'z')
//		key = keu - 32;
//	int len = 0;
//	len = strlen(ch);
//	len--;
//	int count = 0;
//	while (len >= 0)
//	{
//		if (key == ch[len] || keu == ch[len])
//			count++;
//		len--;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[501];
//	int n = 0;
//	for (int i = 0; i < 501; i++)
//		arr[i] = 0;
//	scanf("%d", &n);
//	int c = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &c);
//		arr[c] = c;
//	}
//	for (int i = 0; i < 501; i++)
//		if (arr[i])
//			printf("%d\n", arr[i]);
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void Printf(char* ch, int left, int right)
//{
//	while (left <= right)
//	{
//		printf("%c", ch[left]);
//		left++;
//	}
//	printf("\n");
//}
//int main()
//{
//
//	char ch[101];
//	gets(ch);
//	int left = 0;
//	int right = 0;
//	int len = strlen(ch);
//	int key = 8;
//	while (ch[left]!='\0')
//	{
//
//		int k = 7;
//		int i = left;
//		k = left + k;
//		while (i <= k)
//		{
//			if (ch[i] == '\0')
//			{
//
//				right = i;
//				printf("%s", ch + left);
//				for (int j = 0; j < key - right + left; j++)
//					printf("0");
//				printf("\n");
//				return 0;
//			}
//			i++;
//		}
//		right = i-1;
//		Printf(ch, left, right);
//		left = right + 1;
//		right = left;
//
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int get_int(char ch)
//{
//	if (ch >= '0' && ch <= '9')
//		return ch - '0';
//	else if (ch >= 'A' && ch <= 'Z')
//		return ch - 'A' + 10;
//
//}
//char get_char(int a)
//{
//	if (a >= 0 && a <= 9)
//		return '0' + a;
//	else if (a >= 10 && a <= 15)
//		return a - 10 + 'A';
//
//}
//void reverse_(char* a, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char a[100] = {0};
//	gets(a);
//	int len = strlen(a);
//	int i = 1;
//	int end = len - 1;
//	long long sum = 0;
//	while (end > 1)
//	{
//		sum = sum + get_int(a[end]) * i;
//		end--;
//		i *= 16;
//	}
//	int j = 0;
//	while (sum)
//	{
//		a[j] = get_char(sum % 10);
//		sum /= 10;
//		j++;
//	}
//	a[j] = 0;
//	reverse_(a, 0, j - 1);
//	for (int k = 0; k < j; k++)
//		printf("%c",a[k]);
//	return 0;
////}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{
//	float a = 9.0f;
//	//int b = a;
//	printf("%d\n",3.134);
//	float c = 9;
//	int n = 9;
//	printf("%f\n",n);
//	return 0;
//}
//int main()
//{
//	float a = 3.14;
//	printf("%d",a);
//	return 0;
////}
//int main()
//{
//	//int min = -2147483648;
//	int MIN = -2147483647 - 1;
//	//printf("%*d\n",10,12);
//	return 0;
//
//}