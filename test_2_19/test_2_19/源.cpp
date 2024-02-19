#include<iostream>
using namespace std;
#include<string>
#include<utility>

//#######################################################################################

//复制构造函数的应用

//创建一个点类

//class Point
//{
//public:
//	//内联构造函数
//	Point(int xx, int yy)
//	{
//		x = xx;
//		y = yy;
//	}
//	//赋值构造函数的声明
//	Point(Point& p);
//	//类的行为
//	int getX() { return x; }
//	int getY() { return y; }
//
//private:
//	int x, y;
//};
//
////赋值构造函数的实现
//
//Point::Point(Point& p)
//{
//	x = p.getX();
//	y = p.getY();
//	cout << "复制成功!" << endl;
//}

//#######################################################################################

//移动构造函数应用

//class Mystr
//{
//public:
//	string s;
//
//	Mystr() : s(" ") {}                      //无参构造函数
//
//	Mystr(string _s) : s(std::move(_s)) {}   //有参构造函数
//
//	Mystr(Mystr &&str) noexcept              //告知编译器不会抛出异常
//		: s(std::move(str.s)){}              //移动构造函数
//
//};

//#######################################################################################

//int main()
//{
//	Point a(0, 0);     //创建一个对象 a
//	Point b(a);        //用a初始化b
//	Point c = a;       //用a初始化c
//
//	cout << "a : " << a.getX() << " , " << a.getY() << endl;
//	cout << "b : " << b.getX() << " , " << b.getY() << endl;
//	cout << "c : " << c.getX() << " , " << c.getY() << endl;
//
//	return 0;
//}

//#######################################################################################

//例4-3 游泳池改造预算,Circle类
//栅栏单价35 元/米, 过道造价为20 元/平方米. 过道宽度为3米,游泳池半径由键盘输入.
//要求计算并输出过道和栅栏的造价.

const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCERTE_PRICE = 20;

//圆类的定义

class Circle
{
public:    //外部接口
	Circle(float r);           //构造函数
	float zhouchang();         //计算周长
	float area();              //计算面积

private:   //私有数据成员
	float ri;                  //半径
};

Circle::Circle(float r):ri(r){} //构造函数的实现

float Circle::zhouchang()       //计算周长函数的实现
{
	return ri * PI * 2;
}

float Circle::area()            //计算面积函数的实现
{
	return PI * ri * ri;
}

//主函数

int main()
{
	float r = 0;           //创建半径
	cout << "请输入游泳池的半径(单位:米):> ";
	cin >> r;

	Circle pool(r);        //创建泳池对象
	Circle zhalan(r + 3);  //创建栅栏对象

	float price_zhalan = zhalan.zhouchang() * FENCE_PRICE;  //计算栅栏的造价
	cout << "栅栏的造价为: " << price_zhalan << endl;

	float price_area = (zhalan.area() - pool.area()) * CONCERTE_PRICE;  //计算过道的造价
	cout << "过道的造价为: " << price_area << endl;

	return 0;
}

//#######################################################################################