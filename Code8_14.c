#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
//void Sort(char* a, int len)
//{
//    for (int i = 0; i < len - 1; i++)
//    {
//        int end = i;
//        char key = a[end + 1];
//        while (end >= 0)
//        {
//            if (a[end] > key)
//            {
//                a[end + 1] = a[end];
//                end--;
//            }
//            else
//                break;
//        }
//        a[end + 1] = key;
//    }
//}
//int dedup(char* a, int len)
//{
//    int slow = 0;
//    int fast = 1;
//    while (fast < len)
//    {
//        if (a[fast] != a[slow])
//        {
//            slow++;
//            a[slow] = a[fast];
//        }
//        else
//            fast++;
//    }
//    return slow + 1;
//}
//
//int main()
//{
//
//    char ch[501];
//    gets(ch);
//    int len = strlen(ch);
//    Sort(ch, len);//排序
//    int ret = dedup(ch, len);//去重,返回去重过后的个数
//    printf("%d\n", ret);
//    return 0;
//}
//int majorityElement(int* nums, int numsSize) {
//
//    int count = 1;
//    int key = nums[0];
//    int fast = 1;
//    while (fast < numsSize)
//    {
//        if (nums[fast] == key)
//            count++;
//        else
//        {
//            count--;
//            if (!count)
//                key = nums[fast + 1];
//        }
//        fast++;
//
//    }
//    return key;
//}
//int The_number_of_divisors(int n)
//{
//    int tmp = n;
//    while (tmp)
//    {
//        int a = tmp % 10;
//        if (!a || n % a)
//            return 0;
//        tmp /= 10;
//    }
//    return 1;
//}
//int* selfDividingNumbers(int left, int right, int* returnSize) {
//    int* p = (int*)malloc((right - left + 1) * sizeof(int));
//    *returnSize = 0;
//    for (int i = left; i <= right; i++)
//    {
//        if (The_number_of_divisors(i))
//        {
//            p[*returnSize] = i;
//            (*returnSize)++;
//        }
//    }
//    return p;
//}
//int main()
//{
//    int p = 0;
//    selfDividingNumbers(1,22,&p);
//    return 0;
//}
//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//    int* p = (int*)malloc(sizeof(int) * numsSize);
//    int mid = 0;
//    *returnSize = numsSize;
//    while (mid < numsSize)
//    {
//        if (!mid)
//            p[mid] = 1;
//        else
//        {
//            p[mid] = nums[mid - 1] * p[mid - 1];
//
//        }
//        mid++;
//    }
//    mid--;
//    int ret = 1;
//    while (mid >= 0)
//    {
//        if (mid == numsSize-1)
//            p[mid] = 1 * p[mid];
//        else {
//            ret = ret * nums[mid + 1];
//
//            p[mid] = p[mid] * ret;
//        }
//
//        mid--;
//    }
//    return p;
//}
//int main()
//{
//    int q = 0;
//    int a[] = { 1,2,3,4 };
//    int*p=productExceptSelf(a,4,&q);
//    for (int i = 0; i < 4; i++)
//        printf("%d ",p[i]);
//    return 0;
//}
//int Add(int num1, int num2) {
//    // write code here
//    int tmp = 0;
//    do {
//        tmp = num1;
//        num1 = (num1 & num2) << 1;
//        num2 = tmp ^ num2;
//    } while (num1);
//    return num2;
//}
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int* p = (int*)malloc(sizeof(int) * (numsSize + 1));
//    int j = 1;
//    for (int i = 1; i < numsSize + 1; i++)
//        p[i] = -1;
//    for (int i = 0; i < numsSize; i++)
//    {
//        p[nums[i]] = nums[i];
//    }
//    *returnSize = 0;
//    for (int i = 1; i < numsSize + 1; i++)
//    {
//        if (p[i] == -1)
//        {
//            nums[*returnSize] = i;
//            (*returnSize)++;
//        }
//    }
//    return nums;
//}
//int main()
//{
//    int arr[] = {4,3,2,7,8,2,3,1};
//    int p = 0;
//    findDisappearedNumbers(arr,8,&p);
//
//    return 0;
//}
//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    int max = 0;
//    int left = 0;
//    int right = 0;
//    while (left < numsSize && nums[left] != 1)
//        left++;
//    if (left == numsSize)
//        return 0;
//    right = left;
//    left--;
//    while (right<numsSize&&nums[right] == 1)
//    {
//        right++;
//    }
//    if (right == numsSize)
//    return max = right - left-1;
//    max = right - left - 1;
//    left = right;
//    right++;
//    int tmp = 0;
//    while (right < numsSize)
//    {
//        if (nums[right] == 1)
//            right++;
//        else
//        {
//            tmp = right - left-1;
//            if (tmp > max)
//                max = tmp;
//            left = right++;
//        }
//    }
//    
//    tmp = right - left - 1;
//    if (tmp > max)
//        max = tmp;
//    return max;
//
//}
//int main()
//{
//    int arr[] = {0,0,0,0,1,1,1,1,0,0,0,0,0,1};
//    int len = sizeof(arr) / sizeof(int);
//    int ret = findMaxConsecutiveOnes(arr,len);
//    printf("%d\n",ret);
//    return 0;
//}
//#include<stdio.h>
//int is_perfect_number(int n)
//{
//    int sum = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (!(n % i))
//        {
//            sum += i;
//        }
//    }
//    return sum == n;
//}
//int main()
//{
//    int count = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (int i = 2; i <= n; i++)
//    {
//        if (is_perfect_number(i))
//            count++;
//    }
//    printf("%d\n", count);
//
//    return 0;
//}\
#include<stdio.h>
int is_perfect_number(int n)
{
    int sum = 0;
    int i = 2;
    int left = 1;
    int right = n / left;
    sum = left + right;
    while (left < right)
    {
        if (n % i == 0)
        {
            left = i;
            right = n / i;
            sum = left + right + sum;
        }
        i++;
    }
    sum = sum - n - left - right;
    return sum == n;
}
int main()
{
    int count = 0;
    int n = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (is_perfect_number(i))
            count++;
    }
    printf("%d\n", count);

    return 0;
}