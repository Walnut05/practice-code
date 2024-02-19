#include<iostream>
using namespace std;

//#############################################################################################

//定义一个钟表类

class Clock  
{
public:
	//对成员函数的声明
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
	//构造函数的声明
	Clock(int newH, int newM, int newS);
	//默认构造函数的声明
	Clock();
	//委托构造函数
	//Clock():Clock(0, 0, 0){}

private:
	int hour, minute, second;
};

//对成员函数的实现
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

//构造函数的定义
Clock::Clock(int newH, int newM, int newS) :hour(newH), minute(newM), second(newS){}

//默认构造函数
Clock::Clock() :hour(1), minute(1), second(1){}

//#############################################################################################

//定义一个点类

class Point
{
public:
	Point(int xx = 0, int yy = 0)  //内联构造函数 (隐式声明)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p);  //复制构造函数的声明
	int getX() { return x; }
	int getY() { return y; }

private:
	int x, y;
};

//复制构造函数的定义
Point::Point(Point& p)
{
	x = p.x;
	y = p.y;
	cout << "复制成功!" << endl;
}


//#############################################################################################

int main()
{

	Clock c1(0, 0, 0);

	cout << "c1 第一次显示的时间是: ";
	c1.showTime();
	cout << "c1 第二次显示的时间是: ";
	c1.setTime(8, 30, 0);
	c1.showTime();

	Clock c2;
	cout << "c2 第一次显示的时间是: ";
	c2.showTime();
	cout << "c2 第二次显示的时间是: ";
	c2.setTime(8, 30, 0);
	c2.showTime();


	return 0;
}

//#############################################################################################