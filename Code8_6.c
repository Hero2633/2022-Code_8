#define  _CRT_SECURE_NO_WARNINGS 0
#include<math.h>
#include<stdio.h>
//int missingNumber(int* nums, int numsSize) {
//
//	int x = 0;
//	for (int i = 0; i <= numsSize; i++)
//	{
//		x ^= i;
//	}
//
//	for (int i = 0; i < numsSize; i++)
//		x ^= nums[i];
//	return x;
//}

//void reverse_(char* a, int left, int right)
//{
//	if (left >= right)
//		return;
//	char tmp = a[left];
//	a[left] = a[right];
//	a[right] = tmp;
//	left++;
//	right--;
//	reverse_(a, left, right);
//}
//
//char* reverseLeftWords(char* s, int n) {
//	if (s == NULL)
//		return s;
//	int len = strlen(s);
//	n %= len;
//	if (len == 0)
//		return s;
//	reverse_(s, 0, len - 1);
//	reverse_(s, 0, len - n - 1);
//	reverse_(s, len - n, len - 1);
//	return s;
//}
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
//void NewNode(struct ListNode** phead, int val)
//{
//    struct ListNode* head = *phead;
//    struct ListNode* cur = head->next;
//    if (cur == NULL)
//    {
//        struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
//        head->next = tmp;
//        tmp->val = val;
//        tmp->next = NULL;
//        return;
//    }
//    while (cur->next != NULL)
//        cur = cur->next;
//    struct ListNode* a = (struct ListNode*)malloc(sizeof(struct ListNode));
//    cur->next = a;
//    a->val = val;
//    a->next = NULL;
//}
//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->next = NULL;
//    int tail = 0;
//    int sum = 0;
//    while (l1 && l2)
//    {
//        sum = (l1->val + l2->val + tail) % 10;
//        tail = (l1->val + l2->val + tail) / 10;
//        NewNode(&head, sum);
//        l1 = l1->next;
//        l2 = l2->next;
//    }
//    while (l2)
//    {
//        sum = (l2->val + tail) % 10;
//        tail = (l2->val + tail) / 10;
//        NewNode(&head, sum);
//        l2 = l2->next;
//    }
//    while (l1)
//    {
//        sum = (l1->val + tail) % 10;
//        tail = (l1->val + tail) / 10;
//        NewNode(&head, sum);
//        l1 = l1->next;
//    }
//    if (tail)
//        NewNode(&head, tail);
//    return head->next;
//}
//double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//    int count = nums1Size + nums2Size;
//    int l1 = 0;
//    int l2 = 0;
//    int* tmp = (int*)malloc(sizeof(int) * count);
//    int i = 0;
//    while (l1 < nums1Size && l2 < nums2Size)
//    {
//        if (nums1[l1] <= nums2[l2])
//        {
//            tmp[i] = nums1[l1];
//            l1++;
//        }
//        else
//        {
//            tmp[i] = nums2[l2];
//            l2++;
//        }
//        i++;
//    }
//    while (l1 < nums1Size)
//    {
//        tmp[i] = nums1[l1];
//        ++i;
//        l1++;
//    }
//    while (l2 < nums2Size)
//    {
//        tmp[i] = nums2[l2];
//        ++i;
//        l2++;
//    }
//    if (count % 2)
//    {
//        return tmp[count / 2];
//    }
//    return (tmp[count / 2] + tmp[count / 2 - 1]) / 2.0;
//}
#include<stdio.h>
#include<string.h>
#define INT_MAX 2147483647
#define INT_MIN (-2147483647-1)
//
//int myAtoi(char* s) {
//    int len = strlen(s);
//    if (!len)
//        return 0;
//    int l1 = 0;
//    while (s[l1] == ' ')
//        l1++;
//    int flag = 1;
//    if (s[l1] == '+')
//        l1++;
//    else if (s[l1] == '-')
//    {
//        flag = -1;
//        l1++;
//    }
//    long long sum = 0;
//    while (l1 < len)
//    {
//        if (s[l1] >= '0' && s[l1] <= '9')
//        {
//          sum = sum * 10 + s[l1] - '0';
//            if (sum > INT_MAX / 10&&s[l1+1]>='0'&&s[l1+1]<='9')
//            {
//                return (flag > 0 ? INT_MAX : INT_MIN);
//            }
//            if (sum == INT_MAX / 10)
//            {
//                if (flag > 0 && s[l1+1] >= '7' && s[l1+1] <= '9')
//                    return INT_MAX;
//                if (flag < 0 && s[l1+1] >= '8' && s[l1+1] <= '9')
//                    return INT_MIN;
//            }
//           
//        }
//        else
//            break;
//        l1++;
//    }
//    sum = sum * flag;
//    return (int)sum;
//}
//int myAtoi(char* s) {
//    int i = 0;
//    int out = 0;
//    int pol = 1;
//    int len = strlen(s);
//
//    if (len == 0) 
//        return 0;
//
//    while (s[i] == ' ') i++;  //删除空格
//    if (s[i] == '-') {         //判断正负
//        pol = -1;
//        i++;
//    }
//    else if (s[i] == '+') {
//        pol = 1;
//        i++;
//    }
//    else {
//        pol = 1;
//    }
//
//    while (s[i] != '\0') 
//    {
//        if (s[i] < '0' || s[i]>'9')
//        { //非法字符检查
//            i++;
//            break;
//        }
//        if (out > INT_MAX / 10) return (pol > 0 ? INT_MAX : INT_MIN);  //越界判断
//        if (out == INT_MAX / 10) {
//            if (pol > 0 && s[i] > '7') return INT_MAX;
//            else if (pol < 0 && s[i] >= '8') return INT_MIN;
//        }
//        //下面正常来写应该是out=10*out+(s[i]-'0')，之所以先减去'0',
//        //是为了防止10*out+s[i]越界
//        out = 10 * out - '0' + s[i];
//        //由于本题没有不允许64位的存储数据，所以非法判断可以更加简单
//        //可以直接将out定义为long型，直接判断即可
//        //if(pol*out>INT_MAX) return INT_MAX;
//        //if(pol*out<INT_MIN) return INT_MIN;
//        i++;
//    }
//    out = out * pol;
//
//    return out;
//}
//int main()
//{
//   ;
//   printf("%d\n", myAtoi("214748365"));
//    return 0;
//}
//int main()
//{
//
//	//char a = -128;
//	
//}