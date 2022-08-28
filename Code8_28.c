#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//#include<iostream>
//#include<string>
#include<stdlib.h>
//using namespace std;
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* p = (int*)malloc(8);
    int* tmp = (int*)calloc(numsSize, sizeof(int));
    *returnSize = 2;
    int old_sum = (1 + numsSize) * numsSize / 2;
    int new_sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (tmp[nums[i] - 1] != 0)
        {
            p[0] = nums[i];
        }
        else
        {
            new_sum += nums[i];
            tmp[nums[i] - 1] = nums[i];
        }

    }
    p[1] = old_sum - new_sum;
    free(tmp);
    return p;
}
void Dichotomy_check(int* a, int* count, int key, int left, int right)
{
    if (left > right)
        return;
    int mid = (left + right) / 2;
    if (a[mid] > key)//��ôһ���������䣬��������
    {
        right = mid - 1;
        Dichotomy_check(a, count, key, left, right);
    }
    else if (a[mid] < key)//һ���������䣬��������
    {
        left = mid + 1;
        Dichotomy_check(a, count, key, left, right);
    }
    else//�������䶼�п���
    {
        (*count)++;
        Dichotomy_check(a, count, key, left, mid - 1);
        Dichotomy_check(a, count, key, mid + 1, right);
    }

}
int GetNumberOfK(int* data, int len, int k) {
    // write code her
    int* count = (int*)malloc(4);//������¼����������k�Ĵ���
    *count = 0;
    int left = 0;
    int right = len - 1;
    Dichotomy_check(data, count, k, left, right);//���÷��ε�˼�룬�ֱ������������в���
    int tmp_count = *count;
    free(count);
    count = NULL;
    return tmp_count;

}
int cmp(const void* p1, const void* p2)
{
    return *(int*)p1 - *(int*)p2;

}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, 4, cmp);
    qsort(nums2, nums2Size, 4, cmp);
    int j = 0;
    int i = 0;
    int max = 0;
    if (nums1Size > nums2Size)
        max = nums1Size;
    else
        max = nums2Size;
    int* tmp = (int*)malloc(max * sizeof(int));
    int k = 0;
    int prev = -1;
    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
            j++;
        else
        {
            if (nums1[i] != prev)
            {
                tmp[k] = nums2[j];
                prev = tmp[k];
                k++;
            }
            i++;
            j++;
        }
    }
    *returnSize = k;
    return tmp;
}
int pivotIndex(int* nums, int numsSize) {
    int mid = 0;
    int Lsum = 0;
    int Rsum = 0;
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    while (mid < numsSize)
    {
        if (mid == 0)
        {
            Lsum = 0;
            Rsum = sum - nums[mid];
        }
        else
        {
            Lsum = Lsum + nums[mid - 1];
            Rsum = Rsum - nums[mid];
        }
        if (Lsum == Rsum)
            return mid;
        mid++;
    }
    return -1;
}
int main()
{
    void* p = NULL;
    int* i = NULL;
    p = i;
    i = p;
	return 0;
}