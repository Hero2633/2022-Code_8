#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//int a = 0;
//void test()
//{
//	int a = 10;
//	a += 10;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//
//	return 0;
//}
//int removeDuplicates(int* nums, int numsSize) {
//    int slow = 0;
//    int fast = 0;
//    while (fast < numsSize)
//    {
//        if (nums[fast] == nums[slow])
//            fast++;
//        else
//        {
//            slow++;
//            nums[slow] = nums[fast];
//        }
//
//    }
//    return slow + 1;
//}
//int removeElement(int* nums, int numsSize, int val) {
//
//    int slow = 0;
//    int fast = 0;
//    while (fast < numsSize)
//    {
//        if (nums[fast] == val)
//        {
//            fast++;
//        }
//        else
//        {
//            nums[slow] = nums[fast];
//            slow++;
//            fast++;
//        }
//    }
//    return slow;
//}
//int strStr(char* haystack, char* needle) {
//	if (!needle[0])
//		return 0;
//	char key = needle[0];
//	int mark = 0;
//	int lenhay = strlen(haystack);
//	int lenned = strlen(needle);
//	if (lenned > lenhay)
//		return -1;
//
//	while (mark < lenhay)
//	{
//		int flag = 1;//默认存在
//		while (mark<lenhay&&haystack[mark] != key)//寻找key出现的下标
//			mark++;
//		int lenh = strlen(haystack + mark);
//		if (lenh < lenned)//如果从此下标开始，长度不够肯定不存在，直接返回-1
//			return -1;
//		int i = mark;
//		int j = 0;
//		while (j < lenned)//长度够了，开始比较内容
//		{
//			if (haystack[i] != needle[j])//如果不存在跳出循环；
//			{
//				flag = 0;//改为不存在；
//				mark++;//防止死循环
//				break;
//			}
//			i++;
//			j++;
//		}
//		if (flag)//如果没被改掉，说明存在直接返回下标；
//			return mark;
//	}
//	return -1;
//}
//int main()
//{
//	//printf("%d\n",strcmp("abcde","abc"));
//	int key = 0;
//	key = strStr("aaaaa","bba");
//	printf("%d\n",key);
//	return 0;
//}

