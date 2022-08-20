#pragma once
#include<iostream>
#include<string>
using namespace std;
class Dot
{
private:
	int m_x;
	int m_y;
public:
	void setX(int x);//设置横坐标
		void setY(int y); // 设置纵坐标
		int getX();//获取横坐标
		int getY();//获取纵坐标
	
};
class Circle
{
private:
	int m_R;
	Dot mid;

public:
	void setDot(Dot p);//设置圆心
	void setR(int r);//设置半径
	int getR();//获取半径
	Dot getDot();//获取圆心
	Circle();
	~Circle();

};

