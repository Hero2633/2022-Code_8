#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	char* p = "ABCDEF";
//	*p = 'H';
//	return 0;
//}
//int main()
//{
//	char* p = "ABCDEF";
//	char* p2 = "ABCDEF";
//	if (p == p2)
//		printf("you can see me!");
//	else
//		printf("you not can see me!");
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int e = 4;
//	int* arr2[5] = { &a,&b,&c,&d,&e };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%p ", arr2[i]);
//		printf("%d\n", *(arr2[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int a1[5] = { 1 };
//	int a2[5] = { 2 };
//	int a3[5] = { 3 };
//	int a4[5] = { 4 };
//	int a5[5] = { 5 };
//	int arr[5][5] = { {1},{2},{3},{4},{5} };
//	/*for (int i = 0; i < 5; i++)
//	{
//		printf("%p\n",arr[i]);
//	
//	}*/
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",p[0][i]);
//	}
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}
int Dvi(int x, int y)
{
	return x / y;
}
int Mcl(int x, int y)
{
	return x * y;
}
int Sub(int x, int y)
{
	return x - y;
}
//int main()
//{
//	int (*p)(int, int) = &Add;
//	int (*arr[4])(int, int) = { Add,Dvi,Sub,Mcl };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ",arr[i](6,3));
//	}
//	return 0;
//}
//typedef void(*pf_t)(int);
//void (*signal(int, void(*)(int)))(int);
// pf_t signal(int, pf_t);
//
// 
// //typedef void(*)(int) pf_t;
// typedef int[10] a;
// typedef int a[10];//Õý½â
//int main()
//{
//	a d;
//	return 0;
//}
//int dominantIndex(int* nums, int numsSize) {
//    int max = 0;
//    int key = 0;
//    int mmax = 0;
//    for (int i = 0; i < numsSize; i++)
//        if (nums[i] > max)
//        {
//            mmax = max;
//            max = nums[i];
//            key = i;
//        }
//        else if (nums[i] > mmax)
//            mmax = nums[i];
//
//    return (max >= 2 * mmax) ? key : -1;
//}
//int main()
//{
//    int arr[] = {3,6,1,0};
//    int key=dominantIndex(arr,4);
//    printf("%d\n",key);
//    return 0;
//}
#include<stdlib.h>
//void sort(int* a, int len)
//{
//	int i = 0;
//	while (i < len - 1)
//	{
//		int end = i;
//		int key = a[end + 1];
//		while (end >= 0)
//		{
//			if (a[end] > key)
//			{
//				a[end + 1] = a[end];
//				end--;
//			}
//			else
//				break;
//
//		}
//		a[end+1] = key;
//		i++;
//	}
//
//}
//int dedup(int* a, int len)
//{
//	int slow = 0;
//	int fast = 1;
//	while (fast < len)
//	{
//		if (a[slow] != a[fast])
//		{
//
//			slow++;
//			a[slow] = a[fast];
//
//		}
//		else {
//			fast++;
//			
//		}
//
//	}
//	return slow + 1;
//}
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//
//	int* p = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
//	sort(nums1, nums1Size);
//	sort(nums2, nums2Size);
//	int len1 = dedup(nums1, nums1Size);
//	int len2 = dedup(nums2, nums2Size);
//	*returnSize = 0;
//	int i = 0;
//	int j = 0;
//	while (i < len1 && j < len2)
//	{
//
//		if (nums1[i] == nums2[j]) {
//			p[*returnSize] = nums1[i];
//			i++;
//			(*returnSize)++;
//		}
//
//		else if (nums1[i] > nums2[j])
//			j++;
//		else
//			i++;
//	}
//	return  p;
//}
//int main()
//{
//
//	int arr1[] = {1,2,2,1};
//	int arr2[] = {2,2};
//	int a = 0;
//	intersection(arr1,4,arr2,2,&a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char ch[1001];
//    scanf("%s",ch);
//    int len = strlen(ch);
//
//    int i = 0;
//    while (i < len - 1)
//    {
//        char end = i;
//        char key = ch[end + 1];
//        while (end >= 0)
//        {
//            if (ch[end] > key)
//            {
//                ch[end + 1] = ch[end];
//                end--;
//            }
//            else
//                break;
//        }
//        ch[end + 1] = key;
//        i++;
//    }
//    printf("%s\n", ch);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    char s[10000];
//    gets(s);
//    int len = strlen(s);
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//    }
//    printf("%s\n", s);
//    return 0;
//}