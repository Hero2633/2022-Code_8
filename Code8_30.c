#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//int cmp(const void* p1, const void* p2)
//{
//    return *(char*)p1 - *(char*)p2;
//}
//int* masterMind(char* solution, char* guess, int* returnSize) {
//    *returnSize = 2;
//    int len = strlen(guess);
//    int same = 0;
//    int SAME = 0;
//    int* tmp = (int*)malloc(sizeof(int) * 2);
//    for (int k = 0; k < len; k++)
//        if (solution[k] == guess[k])//o(N)
//            same++;
//    tmp[0] = same;
//    qsort(solution, len, 1, cmp);
//    qsort(guess, len, 1, cmp);//nlogn
//    int i = 0;
//    int j = 0;
//    while (i < len && j < len)//O(N)
//    {
//        if (solution[i] < guess[j])
//            i++;
//        else if (solution[i] > guess[j])
//            j++;
//        else
//        {
//            SAME++;
//            i++;
//            j++;
//        }
//    }
//    tmp[1] = SAME - same;
//    return tmp;
//}
////int cmp(const void* p1, const void* p2)
////{
////    return *(int*)p1 - *(int*)p2;
////}
//bool Two_points(int* a, int left, int right, int key, int* ret)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (a[mid] > key)
//            right = mid - 1;
//        else if (a[mid] < key)
//            left = mid + 1;
//        else
//        {
//            *ret = key;
//            return true;
//        }
//    }
//    return false;
//}
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    *returnSize = 2;
//    int* tmp = (int*)malloc(sizeof(int) * 2);
//    int* arr = (int*)malloc(sizeof(int) * numsSize);
//    int k = 0;
//    for (k = 0; k < numsSize; k++)
//        arr[k] = nums[k];
//    qsort(arr, numsSize, 4, cmp);
//    int key1 = 0;
//    int key2 = 0;
//    int left = 1;
//    int right = numsSize - 1;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (i)
//        {
//            int tmp = arr[0];
//            arr[0] = arr[i];
//            arr[i] = tmp;
//        }
//        key1 = target - arr[0];
//        if (Two_points(arr, left, right, key1, &key2))
//        {
//            break;
//        }
//    }
//    int j = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (j < 2 && nums[i] != arr[0] && nums[i] == (key2))
//        {
//            tmp[j++] = i;
//        }
//        else if (j < 2 && nums[i] == arr[0] && nums[i] != (key2))
//            tmp[j++] = i;
//        if (j >= 2)
//            break;
//    }
//    free(arr);
//    arr = NULL;
//    return tmp;
//}
//int* masterMind(char* solution, char* guess, int* returnSize) {
//    static int ret[2] = { 0,0 };
//    ret[0] = 0;
//    ret[1] = 0;
//    int g_arr[26] = { 0 };
//    int s_arr[26] = { 0 };
//    *returnSize = 2;
//    int same = 0;
//    int i = 0;
//    int len = strlen(guess);
//    while (i < len)
//    {
//        if (guess[i] == solution[i])
//            same++;
//        else
//        {
//            s_arr[solution[i] - 'A']++;
//            g_arr[guess[i] - 'A']++;
//        }
//        i++;
//    }
//    for (int j = 0; j < 26; j++)
//    {
//        ret[1] += ((g_arr[j] < s_arr[j]) ? g_arr[j] : s_arr[j]);
//    }
//    ret[0] = same;
//    return ret;
//}
//int main()
//{
//    char* p1 = "BRBB";
//    char* p2 = "RBGY";
//    int ret = 0;
//    int*p=masterMind(p1,p2,&ret);
//    for (int i = 0; i < 2; i++)
//        printf("%d ",p[i]);
//   //  int static a[10] = { 0 };
//   ///* int arr[] = {2,7,11,15};
//   // int ret = 0;
//   // twoSum(arr,4,9,&ret);*/
//   //  for (int i = 0; i < 10; i++)
//   //  {
//   //      printf("%d ",a[i]);
//   //  }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int x = 0;
//    int ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &ret);
//        x ^= ret;
//    }
//    printf("%d\n", x);
//    return 0;
//}
//int findPeakElement(int* nums, int len) {
//    // write code here
//    int mid = 0;
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        mid = (left + right) / 2;
//        if ((nums[mid] > nums[mid + 1]) && (nums[mid] > nums[mid - 1]))
//            return mid;
//        else if (nums[mid] > nums[mid - 1])
//            right = mid + 1;
//        else if (nums[mid] < nums[mid + 1])
//            left = mid - 1;
//    }
//    return -1;
//}
//int main()
//{
//    int arr[] = { 2,4,1,2,7,8,4 };
//    int len = sizeof(arr)/sizeof(arr[0]);
//    findPeakElement(arr,len);
//    return 0;
//}