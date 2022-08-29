#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<iostream>
//#include<string>
//#include<stdbool.h>
//using namespace std;
//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    int j = 1;
//    int ret = 1;
//    int k = 0;
//    int* tmp = (int*)malloc(sizeof(int) * numsSize);
//    while (i < numsSize)
//    {
//        if (i != 0)
//        {
//            int tmp = nums[0];
//            nums[0] = nums[i];
//            nums[i] = tmp;
//        }
//        for (j = 1; j < numsSize; j++)
//        {
//            ret *= nums[j];
//        }
//        tmp[k++] = ret;
//        ret = 1;
//        i++;
//    }
//    *returnSize = k;
//    return tmp;
//}
//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//    int* tmp = (int*)malloc(sizeof(int) * numsSize);
//    int j = 0;
//    int i = 0;
//    int ret = 1;
//    for ( i = 0; i < numsSize; i++)
//    {
//        if (!i)
//        {
//            ret = 1;
//        }
//        else
//        {
//            ret = ret * nums[i - 1];
//        }
//        tmp[j++] = ret;
//    }
//    j--;
//    ret = 1;
//    for (i = i - 1; i >= 0; i--)
//    {
//        if (i == numsSize - 1)
//        {
//            ret = 1;
//        }
//        else
//        {
//            ret = ret * nums[i + 1];
//        }
//        tmp[j] = tmp[j] * ret;
//        j--;
//    }
//    *returnSize = numsSize;
//    return tmp;
//}
//void Capcity(int** ret, int* returnSize, int key)
//{
//    *ret = realloc(*ret, (*returnSize + 1) * sizeof(int));
//    if (*ret == NULL)
//        return;
//    *ret[*returnSize] = key;
//    (*returnSize)++;
//}
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int* tmp = (int*)calloc(numsSize, sizeof(int));
//    int i = 0;
//    int j = 0;
//    *returnSize = 0;
//    int* ret = NULL;
//    for (i = 0; i < numsSize; i++)
//    {
//        tmp[nums[i] - 1] = nums[i];
//    }
//    for (j = 0; j < numsSize; j++)
//    {
//        if (!tmp[j])
//            Capcity(&ret, returnSize, j + 1);
//    }
//    return ret;
//}
//void CapCity(int** ret, int* Size, int key)
//{
//    *ret = realloc(*ret, sizeof(int) * (*Size + 1));
//    (*ret)[*Size] = key;
//    (*Size)++;
//}
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    *returnSize = 0;
//    int index = 0;
//    int* ret = (int*)malloc(sizeof(int));
//    for (index = 0; index < numsSize; index++)
//    {
//        if (nums[abs(nums[index]) - 1] > 0)
//            nums[abs(nums[index]) - 1] *= -1;
//    }
//    for (int j = 0; j < numsSize; j++)
//        if (nums[j] > 0)
//            CapCity(&ret, returnSize, j + 1);
//    return ret;
//}
//int main()
//{
//    int arr[] = { 4,3,2,7,8,2,3,1 };
//    int p=0;
//    int*ret=findDisappearedNumbers(arr,sizeof(arr)/sizeof(int),&p);
//    for (int i = 0; i < p; i++)
//        printf("%d ",ret[i]);
//	return 0;
//}