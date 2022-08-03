#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int tmp = n;
//	while (1!=n)
//	{
//		sum = sum + n / 2;
//		n = n / 2 + n % 2;
//	}
//	printf("%d\n",tmp+sum);
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//#define begin 10000
//#define end 99999
//#define count 5
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	int tmp = begin;
//
//	while (tmp <= end)
//	{
//		sum = 0;
//		for (int q = 10; q <= 10000; q *= 10)
//			sum = sum + (tmp / q) * (tmp % q);
//		if (sum == tmp)
//			printf("%d ", tmp);
//		tmp++;
//
//	}
//	return 0;
//}
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<mmsystem.h>
#include<windows.h>
#pragma comment (lib,"winmm.lib")
void BGM()
{
	mciSendString("open 120.mp3",NULL,0,NULL);//可以在歌曲名后面加个alias表示给歌曲取别名，别名直接写在后面就行了
	mciSendString("play 120.mp3", NULL, 0, NULL);//歌曲名后面加wait表示等歌曲放完在返回加repeat表示重复播放；
	//mciSendString("close 120.mp3", NULL, 0, NULL);

}
void change()
{
	HWND p;
	p = GetHWnd();//获取句柄
	SetWindowText(p,"EasyX快速入门");//设置窗口标题
	MessageBox(NULL, "恭喜你中奖500W", "提示", MB_OKCANCEL);//弹出窗口，提示用户操作
}
int main()
{
	initgraph(640,496,SHOWCONSOLE);//绘画窗口
	int x = 0;
	int y = 0;
	//BGM();
	
	while (1)
	{
	BeginBatchDraw();//开始批量绘图//防止图片一闪一闪的
	setbkcolor(WHITE);//设置背景颜色
	cleardevice();//刷新一下背景颜色；
	setbkmode(TRANSPARENT);//设置背景模式为透明
	setfillcolor(YELLOW);//设置填充颜色为黄色//必须设置的有填充样式的图形，此函数才起作用
	setlinecolor(RGB(204, 232, 207));//设置线条颜色
	setlinestyle(PS_DASH,2);//设置线条样式为虚线
	int x1 = 250;
	int y1 = 50;
	int x2 = 450;
	int y2 = 150;//将矩形的大小动态起来
	fillrectangle(x1,y1,x2,y2);//在（250，50）与（450，150）处画个矩形
	settextcolor(RGB(125, 184, 235));//设置文字颜色
	settextstyle(30,0,"宋体");//设置文字样式
	int hx = textwidth("Hello World!");//计算文本宽度
	int hy = textheight("Hello World!");//计算文本高度
	outtextxy((x2-x1-hx)/2+x1,(y2-y1-hy)/2+y1,"Hello World!");//输出文字
	IMAGE p;//定义一个变量用来存储图片
	loadimage(&p,"img.jpg", 250, 450);//将图片以250 x 450的大小存入p
	putimage(0,0,&p);//从（0，0）位置开始输出图片；

	//MOUSEMSG msg;
	//while(1)
	//{
	//	if (MouseHit())//如果有鼠标消息我们才进来
	//	{
	//		msg = GetMouseMsg();//获取鼠标消息
	//		if (msg.x > x1 && msg.x < x2 && msg.y >= y1 && msg.y <= y2)//如果鼠标在黄色矩形或者点击黄色矩形会有提示；
	//		{
	//			printf("鼠标在黄色矩阵的范围内!\n");
	//		}
	//		switch (msg.uMsg)//分发鼠标消息；
	//		{
	//		case WM_LBUTTONDOWN:
	//			outtextxy(250, 450, "鼠标左键按下");
	//			printf("鼠标左键按下,当前坐标(%d,%d)\n",msg.x,msg.y);//由于这里需要展示控制台，
	//			                                                 //我们在initgraph（）里面的NULL应该改为SHOWCONSOLE
	//			break;
	//		case WM_RBUTTONDOWN:
	//			outtextxy(250, 450, "鼠标右键键按下"); 
	//			printf("鼠标左键按下,当前坐标(%d,%d)\n", msg.x, msg.y);
	//			break;
	//		}
	//	}
	//}
	//cleardevice();
	
	//while (1)
	//{
	//	cleardevice();
	/*	setfillcolor(RED);
		setlinestyle(PS_DASH);
		fillcircle(x, y, 50);*/
	//	char ch =_getch();
	//	switch (ch)
	//	{
	//	case 'W':
	//	case 'w':
	//	case 72:; y -= 5;
	//		printf("你按了下上键\n"); break;
	//	case 'S':
	//	case 's':
	//	case 80:y += 5;
	//		printf("你按下了下键\n"); break;
	//	case 'A':
	//	case'a':
	//	case 75:x -= 5;
	//		printf("你按下了左键\n"); break;
	//	case 'D':
	//	case 'd':
	//	case 77:x += 5;
	//		printf("你按下了右键\n"); break;
	//	}
	//}
	
		//cleardevice();
		setfillcolor(RGB(0, 122, 204));
		setlinestyle(PS_DASH);
		fillcircle(x, y, 20);
		EndBatchDraw();//结束批量绘图
		if (GetAsyncKeyState(VK_UP))
			y -=  5;
		if (GetAsyncKeyState(VK_DOWN))
			y += 5;
		 if (GetAsyncKeyState(VK_LEFT))
			x -= 5;
		if (GetAsyncKeyState(VK_RIGHT))
			x += 5;
		//change();
	}
	system("pause");//防止窗口一闪而过卡死窗口
	closegraph();//关闭窗口
	return 0;
}