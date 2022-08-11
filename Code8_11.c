#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	float a = 9.0f;
////	int c = 9;
//	printf("%d\n",a);
//
//	return 0;
//}
//typedef int a[10];
//a c = { 1,2,3,4,5,6,7,8,9,0 };
//float Add(float x,float y)
//{
//	printf("%p %p\n",&x,&y);
//	return x + y;
//}
//int main()
//{
//	/*float a = 10.0f;
//	float b = 9.0f;
//	Add(a,a);*/
//	short a = 32767;
//	printf("%hhd %hhd",a,a);
//	return 0;
//}
//int main()
//{
//	/*int a = 0x11223344;
//	printf("%c %c %c %c",a);*/
//	int a = 0x11223344;
//	printf("%c %c %d\n",a,a);
//	return 0;
/*}*///11001100000100010010001000110011
///10110011111011101101110111001100
///10110011111011101101110111001101
/// 
//
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int arr[N + 1];
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int key = 0;
//    scanf("%d", &key);
//    int end = N - 1;
//    while (end >= 0)
//    {
//
//        if (arr[end] > key)
//        {
//            arr[end + 1] = arr[end];
//            end--;
//        }
//        else
//            break;
//    }
//    arr[end + 1] = key;
//    for (int i = 0; i < N + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}
//#include<limits.h>
////int main()
////{
////	//long a = -2147483648;
////	/*LONG_MIN;
////	unsigned short a = -32768;
////	short c = -a;
////	SHRT_MIN;*/
////      /* -(unsigned int)0;*/
////	//-9223372036854775808;
////	return 0;
////}
#include<stdlib.h>
//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    while (i < numsSize - 1)
//    {
//
//        int end = i;
//        int key = nums[end + 1];
//        while (end >= 0)
//        {
//
//            if (nums[end] > key)
//            {
//                nums[end + 1] = nums[end];
//                end--;
//            }
//            else
//                break;
//        }
//        nums[end + 1] = key;
//        i++;
//    }
//    int slow = 0;
//    int fast = 1;
//    int* p = (int*)malloc(sizeof(int) * 2);
//    while (fast < numsSize)
//    {
//        if (nums[slow] != nums[fast])
//        {
//            slow++;
//            nums[slow] = nums[fast];
//            fast++;
//        }
//        else
//        {
//            p[0] = nums[slow];
//             fast++;
//        }
//    }
//    int sum = (1 + numsSize) * numsSize / 2;
//    int sum1 = 0;
//    for (int i = 0; i <=slow; i++)
//        sum1 += nums[i];
//    p[1] = sum - sum1;
//    *returnSize = 2;
//    return p;
//}
//int main()
//{
//    int ni[] = {3,2,2 };
//    int a = 0;
//    int *p=findErrorNums(ni,2+1,&a);
//    printf("%d %d",p[0],p[1]);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch[101];
//    int n = 0;
//    scanf("%d", &n);
//    getchar();
//    while (n)
//    {
//        gets(ch);
//        int len = strlen(ch);
//        if (len < 8)//判断长度
//        {
//            printf("NO\n");
//            goto eg;
//        }
//        if (ch[0] >= '0' && ch[0] <= '9')//判断开头
//        {
//            printf("NO\n");
//            goto eg;
//        }
//        int i = 0;
//        int a = 0;
//        int b = 0;
//        int c = 0;
//        while (i < len)
//        {
//            if ((ch[i] >= '0' && ch[i] <= '9'))
//                a++;
//            else if ((ch[i] >= 'a' && ch[i] <= 'z'))
//                b++;
//            else if ((ch[i] >= 'A' && ch[i] <= 'Z'))
//                c++;
//            else//判断有没有其它字符
//            {
//                printf("NO\n");
//                goto eg;
//            }
//            i++;
//        }
//        if (a + b + c >= 2)
//            printf("YES\n");
//    eg:
//        ;
//        n--;
//    }
//    return 0;
//}
//int GetNumberOfK(int* data, int dataLen, int k) {
//     write code here
//    int count = 0;
//    for (int i = 0; i < dataLen; i++)
//    {
//        if (data[i] == k)
//            count++;
//
//    }
//    return count;
//}
//int main()
//{
//    int a[] = {3};
//    int s=GetNumberOfK(a,1,3);
//    printf("%d",s);
//	return 0;
//}
//int convertInteger(int A, int B) {
//	int c = A ^ B;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int s=convertInteger(826966453,- 729934991);
//	printf("%d",s);
//
//	return 0;
//}