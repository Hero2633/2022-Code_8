#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void PrintfArr(int* a, int l)
//{
//	int i = 0;
//	for (i = 0; i < l; i++)
//		printf("%d->", a[i]);
//
//}
//
//int PartSort1(int* a, int left, int right)
//{
//	int pivon = left;
//	int key = a[left];
//	while (left < right)
//	{
//		while (left < right && a[right] >= key)
//			--right;
//		a[pivon] = a[right];
//		pivon = right;
//		while (left < right && a[left] <= key)
//			++left;
//		a[pivon] = a[left];
//		pivon = left;
//
//	}
//
//	a[pivon] = key;
//	return pivon;
//
//
//}
//int PartSort2(int* a, int left, int right)
//{
//	int pivon = left;
//	int key = a[left];
//	while (left < right)
//	{
//		while (left < right && a[right] >= key)
//			--right;
//		while (left < right && a[left] <= key)
//			++left;
//
//		Swap(a + left, a + right);
//
//	}
//
//	Swap(a + pivon, a + left);
//	return right;
//}
//int PartSort3(int* a, int left, int right)
//{
//	int pivon = left;
//	int key = a[left];
//	int cur = left;
//	int prev = left;
//	while (cur != right + 1)
//	{
//
//		if (a[cur] < key)
//		{
//			++prev;
//			Swap(a + prev, a + cur);
//		}
//		++cur;
//	}
//	Swap(a + pivon, a + prev);
//	return prev;
//
//}
//void QuickSort(int* a, int left, int right)
//{
//	if (left >= right)
//		return;
//	int pivon = PartSort3(a, left, right);
//	QuickSort(a, left, pivon - 1);
//	QuickSort(a, pivon + 1, right);
//
//}
//#include<stdio.h>
//int main()
//{
//	int a[] = { 9,8,7,6,5,1,32,5,46,68,56,769,43,1,76,8 };
//	int len = (int)sizeof(a) / sizeof(a[0]);
//	QuickSort(a, 0, len - 1);
//	PrintfArr(a, len);
//	return 0;
//
//}
//void InitializBoard(char a[][L])
//{
//
//	for (int i = 0; i < R; i++)
//	{
//		for (int j = 0; j < L; j++)
//		{
//			a[i][j] = ' ';
//		}
//	}
//}
//void PrintBoard(const char a[][L])
//{
//	int j = 0;
//	for (int i = 0; i < R; i++)
//	{
//		for (j = 0; j < L; j++)
//		{
//			printf("+---");
//		}
//		printf("+\n");
//		for (j = 0; j < L; j++)
//		{
//			printf("| %c ", a[i][j]);
//		}
//		puts("| ");
//	}
//	for (j = 0; j < L; j++)
//	{
//		printf("+---");
//	}
//	printf("+\n");
//}
//void ComputerPlayers(char a[][L])
//{
//	if (BoardisFll(a))
//		return;
//	int x = rand() % R;
//	int y = rand() % L;
//	while (!CheckCoordinates(a, x, y))
//	{
//		x = rand() % R;
//		y = rand() % L;
//	}
//	a[x][y] = 'O';
//}
//int CheckCoordinates(char a[][L], int x, int y)
//{
//	if ((x >= 0 && x <= R - 1) && (y >= 0 && y <= L - 1))
//	{
//		if (a[x][y] != ' ')
//			return 0;
//		else
//			return 1;
//
//	}
//	return 0;
//}
//void HumanPlayers(char a[][L])
//{
//	if (BoardisFll(a))
//		return;
//	int x;
//	int y;
//	printf("请输入你的坐标:");
//	scanf("%d%d", &x, &y);
//	while (!CheckCoordinates(a, x - 1, y - 1))
//	{
//		printf("坐标非法,请重新输入:");
//		scanf("%d%d", &x, &y);
//	}
//	a[x - 1][y - 1] = 'X';
//
//}
//
//int BoardisFll(char a[][L])
//{
//	for (int i = 0; i < R; i++)
//	{
//		for (int j = 0; j < L; j++)
//		{
//			if (a[i][j] == ' ')
//				return 0;
//
//		}
//	}
//	return 1;
//}
//char WhoWin(char arr[][L])
//{
//	int h = R;
//	int l = L;
//	int i = 0;
//	for (i = 0; i < h; i++)//横三行
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
//			return arr[i][1];
//	}
//	for (int j = 0; j < l; j++)//竖三列
//	{
//		if (arr[0][j] == arr[1][j] && arr[2][j] == arr[1][j] && arr[1][j] != ' ')
//			return arr[1][j];
//	}
//	if (arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1] && arr[1][1] != ' ')//东南下
//		return arr[1][1];
//	if (arr[2][0] == arr[1][1] && arr[0][2] == arr[1][1] && arr[1][1] != ' ')//西南下
//		return arr[1][1];
//	if (BoardisFll(arr))//没位置了，满了
//		return 'F';
//	return 'C';//继续（未分出胜负，也未平局）
//}
//void game(char arr[][L])
//{
//	while (1)
//	{
//		printf("电脑走->\n");
//		ComputerPlayers(arr);
//		if (WhoWin(arr) == 'O')
//		{
//			printf("电脑赢,是否继续?\n");
//			PrintBoard(arr);
//			break;
//		}
//		else if (WhoWin(arr) == 'F')
//		{
//			printf("平局,是否继续?\n");
//			PrintBoard(arr);
//			break;
//		}
//		PrintBoard(arr);
//		printf("人类走->\n");
//		HumanPlayers(arr);
//		if (WhoWin(arr) == 'X')
//		{
//			printf("人类赢,是否继续?\n");
//			PrintBoard(arr);
//			break;
//		}
//		else if (WhoWin(arr) == 'F')
//		{
//			printf("平局,是否继续?\n");
//			PrintBoard(arr);
//			break;
//		}
//		PrintBoard(arr);
//	}
//
//}