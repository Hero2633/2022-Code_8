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
	void setX(int x);//���ú�����
		void setY(int y); // ����������
		int getX();//��ȡ������
		int getY();//��ȡ������
	
};
class Circle
{
private:
	int m_R;
	Dot mid;

public:
	void setDot(Dot p);//����Բ��
	void setR(int r);//���ð뾶
	int getR();//��ȡ�뾶
	Dot getDot();//��ȡԲ��
	Circle();
	~Circle();

};

