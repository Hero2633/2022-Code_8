#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//int pivotIndex(int* nums, int numsSize) {
//    int mid = 0;
//    int Lsum = 0;
//    int Rsum = 0;
//    int sum = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        sum += nums[i];
//    }
//    while (mid < numsSize)
//    {
//        if (mid == 0)
//        {
//            Lsum = 0;
//            Rsum = sum-nums[mid];
//        }
//        else
//        {
//            Lsum = Lsum + nums[mid - 1];
//            Rsum = Rsum - nums[mid];
//        }
//        if (Lsum == Rsum)
//            return mid;
//        mid++;
//    }
//    return -1;
//}
//int main()
//{
//    int arr[] = {2,1,-1};
//    int len = sizeof(arr)/sizeof(int);
//  int ret=  pivotIndex(arr,len);
//  
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int cmp_char(const void* l1, const void* l2)
//{
//    return (*(char*)l1) - (*(char*)l2);
//}
//int main()
//{
//    char tmp[1001];
//    gets(tmp);
//    int len = strlen(tmp);
//    qsort(tmp, len, sizeof(char), cmp_char);
//    puts(tmp);
//    return 0;
//}
//int num['a'];
//void func()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//}
//int main()
//{
//	//func();
//	
//		unsigned short x = 65530;
//	unsigned int y = x;
//	printf("%u",y);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch[25];
//    gets(ch);
//    int len = strlen(ch);
//    for (int i = len - 1; i >= 0; i--)
//        printf("%c", ch[i]);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void reverse_string(char* a, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = a[left];
//        a[left] = a[right];
//        a[right] = tmp;
//        left++;
//        right--;
//    }
//
//}
//int main()
//{
//    char arr[10001];
//    gets(arr);
//    int len = strlen(arr);
//    reverse_string(arr, 0, len - 1);
//    int left = 0;
//    int right = 0;
//    int j = 0;
//    while (left < len)
//    {
//        while ((left < len) && (arr[left] < 'a' || arr[left] >'z') && (arr[left] < 'A' || arr[left]>'Z'))
//            left++;
//        right = left;
//        while (((arr[right] >= 'a' && arr[right] <= 'z') || (arr[right] >= 'A' && arr[right] <= 'Z')))
//            right++;
//        reverse_string(arr, left, right - 1);
//        for (int i = left; i < right; i++)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//        arr[j++] = ' ';
//        left = right;
//    }
//    arr[j] = '\0';
//        printf("%s\n", arr);
//    return 0;
//}
//int fun(unsigned int x)
//{
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | (x + 1);
//	} 
//		return n;
//}
//int main()
//{
//	printf("%d\n",fun(2014));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    printf("%d\n", c);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//
//    int n = 0;
//    int m = 0;
//    double a = 0.0;
//    double sum = 0.0;
//    while (EOF != scanf("%d%d", &n, &m))
//    {
//        a = (double)n;
//        sum = 0.0;
//        for (int i = 0; i < m; i++)
//        {
//            sum = sum + a;
//            a = sqrt(a);
//        }
//        printf("%.2lf\n", sum);
//    }
//    return 0;
//}
//int* masterMind(char* solution, char* guess, int* returnSize) {
//    int* p = (int*)malloc(2 * sizeof(int));
//    *returnSize = 0;
//    p[0] = 0;
//    p[1] = 0;
//    for (int i = 0; i < strlen(guess); i++)
//    {
//        if (solution[i] == guess[i])
//            p[*returnSize]++;
//    }
//    (*returnSize) += 1;
//    int len1=dept(solution);
//    dept(guess);
//    for (int i = 0; i < strlen(guess); i++)
//    {
//        for (int j = 0; j < strlen(guess); j++)
//        {
//            if (i != j && guess[j] == solution[i])
//                p[*returnSize]++;
//        }
//    }
//    return p;
//}
//int main()
//{
//    char arr[] = "RGEB";
//    char arr2[] = "BBBY";
//    int p = 0;
//    masterMind(arr,arr2,&p);
//    return 0;
//}
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int* returnSizes = (int*)malloc(8);
//    assert(returnSizes);
//    int src = 0;
//    int des = 1;
//    while (src < numsSize)
//    {
//        if (nums[src] + nums[des] == target)
//        {
//            *returnSize = 2;
//            *returnSizes = src;
//            *(returnSizes + 1) = des;
//
//            return returnSizes;
//        }
//        des++;
//        if (des == numsSize)
//        {
//            src++;
//            des = src + 1;
//        }
//
//    }
//    *returnSize = 0;
//    return NULL;
//}
//int main()
//{
//    twoSum();
//    return 0;
//}