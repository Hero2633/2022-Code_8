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
//		int flag = 1;//Ĭ�ϴ���
//		while (mark<lenhay&&haystack[mark] != key)//Ѱ��key���ֵ��±�
//			mark++;
//		int lenh = strlen(haystack + mark);
//		if (lenh < lenned)//����Ӵ��±꿪ʼ�����Ȳ����϶������ڣ�ֱ�ӷ���-1
//			return -1;
//		int i = mark;
//		int j = 0;
//		while (j < lenned)//���ȹ��ˣ���ʼ�Ƚ�����
//		{
//			if (haystack[i] != needle[j])//�������������ѭ����
//			{
//				flag = 0;//��Ϊ�����ڣ�
//				mark++;//��ֹ��ѭ��
//				break;
//			}
//			i++;
//			j++;
//		}
//		if (flag)//���û���ĵ���˵������ֱ�ӷ����±ꣻ
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

