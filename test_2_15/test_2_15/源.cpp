#include<iostream>
using namespace std;

//#############################################################################################

//����һ���ӱ���

class Clock  
{
public:
	//�Գ�Ա����������
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
	//���캯��������
	Clock(int newH, int newM, int newS);
	//Ĭ�Ϲ��캯��������
	Clock();
	//ί�й��캯��
	//Clock():Clock(0, 0, 0){}

private:
	int hour, minute, second;
};

//�Գ�Ա������ʵ��
void Clock::setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime()
{
	cout << hour << " : " << minute << " : " << second << endl;
}

//���캯���Ķ���
Clock::Clock(int newH, int newM, int newS) :hour(newH), minute(newM), second(newS){}

//Ĭ�Ϲ��캯��
Clock::Clock() :hour(1), minute(1), second(1){}

//#############################################################################################

//����һ������

class Point
{
public:
	Point(int xx = 0, int yy = 0)  //�������캯�� (��ʽ����)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p);  //���ƹ��캯��������
	int getX() { return x; }
	int getY() { return y; }

private:
	int x, y;
};

//���ƹ��캯���Ķ���
Point::Point(Point& p)
{
	x = p.x;
	y = p.y;
	cout << "���Ƴɹ�!" << endl;
}


//#############################################################################################

int main()
{

	Clock c1(0, 0, 0);

	cout << "c1 ��һ����ʾ��ʱ����: ";
	c1.showTime();
	cout << "c1 �ڶ�����ʾ��ʱ����: ";
	c1.setTime(8, 30, 0);
	c1.showTime();

	Clock c2;
	cout << "c2 ��һ����ʾ��ʱ����: ";
	c2.showTime();
	cout << "c2 �ڶ�����ʾ��ʱ����: ";
	c2.setTime(8, 30, 0);
	c2.showTime();


	return 0;
}

//#############################################################################################