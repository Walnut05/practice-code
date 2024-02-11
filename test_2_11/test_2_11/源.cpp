#include<iostream>
using namespace std;

//###################################################################################################

//例3-8 求n!

//int My_jie(int n)
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else {
//		return n * My_jie(n - 1);
//	}
//}
//
//int main()
//{
//	int n;
//
//	cout << "请输入要求阶乘的整数:> ";
//	cin >> n;
//
//	cout << n << "! = " << My_jie(n);
//
//	return 0;
//}

//###################################################################################################

//用递归法计算从n个人中选择k个人组成一个委员会的不同组合数.
//由n个人里选k个人的组合数 = 由n - 1个人里选k个人的组合数 + 由n - 1个人里选k - 1个人的组合数

//unsigned My_xuan(unsigned n, unsigned k)
//{
//	if (k == 0 || n == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return My_xuan(n - 1, k) + My_xuan(n - 1, k - 1);
//	}
//}
//
//int main()
//{
//	unsigned n, k;
//
//	b1:
//	cout << "总共有多少人:> ";
//	cin >> n;
//	cout << "要选择多少人:> ";
//	cin >> k;
//
//	if (n >= k)
//	{
//		cout << n << "个人里选" << k << "个人有" << My_xuan(n, k) << "种选法.";
//	}
//	else {
//		cout << "选择错误,请重新选择.";
//		system("pause");
//		system("cls");
//		goto b1;
//	}
//
//	return 0;
//}

//###################################################################################################

//汉诺塔问题.

//void move(char begin, char dream)
//{
//	cout << begin << " --> " << dream << endl;
//}
//
//void hanoi(int n, char begin, char mid, char dream)
//{
//	if (n == 1)
//		move(begin, dream);
//	else {
//		hanoi(n - 1, begin, dream, mid);
//		move(begin, dream);
//		hanoi(n - 1, mid, begin, dream);
//	}
//}
//
//int main()
//{
//	int m;
//
//	cout << "请输入有几个盘子:> ";
//	cin >> m;
//
//	cout << "这 " << m << " 个盘子移动的步骤为: " << endl;
//	hanoi(m, 'A', 'B', 'C');
//
//	return 0;
//}

//###################################################################################################

//例3-15 带默认形参值的函数举例.
//本程序的功能是计算长方体的体积.子函数getVolume是计算体积的函数,有三个形参:
// length(长),height(高),width(宽).其中width 和height带有默认值.
// 主函数中以不同形式调用getVolume函数,分析程序的运行成果.

//int getVolume(int length, int height = 6, int width = 10);
//
//int main()
//{
//	int length, height, width;
//
//	cout << "length: " << 6 << " Volume is " << getVolume(6) << endl;
//
//	cout << "请输入长,高,宽: ";
//	cin >> length >> height >> width;
//
//	cout << "Volume is " << getVolume(length, height, width) << endl;
//
//	return 0;
//}
//
//int getVolume(int length, int height, int width)
//{
//	return length * height * width;
//}

//###################################################################################################

//例3-16 重载函数应用举例
//编写两个名为 sumOfSquare 的重载函数,分别求两整数的平方和及两实数的平方和.

//int sumOfSquare(int x, int y)
//{
//	return x + y;
//}
//
//float sumOfSquare(double x, double y)
//{
//	return x + y + 1;
//}
//
//int main()
//{
//	int x = 10, y = 9;
//
//	cout << sumOfSquare(x, y) << endl;
//	cout << sumOfSquare(1.0, 2.0) << endl;
//
//	return 0;
//}

//###################################################################################################

//系统函数应用举例
//例3-17 从键盘输入一个角度值,求出该角度的正弦值,余弦值和正切值
//分析:系统函数中提供了求正弦值,余弦值和正切值的函数:sin(),cos().tan(),函数的说明在头文件cmath中

//#include<cmath>
//
//const int PI = 3.14159265358979;
//
//int main()
//{
//	double angle;
//
//	cout << "请输入一个角度:> ";
//	cin >> angle;                  //输入角度值
//
//	double radian = angle * PI / 180;    //转化为弧度制
//
//	cout << "sin " << angle << " = " << sin(radian) << endl
//		<< "cos " << angle << " = " << cos(radian) << endl
//		<< "tan " << angle << " = " << tan(radian) << endl;
//
//	return 0;
//}

//###################################################################################################

//观察下面程序的运行,与自己的设想做比较,有何不同?

//int main()
//{
//	int intOne;
//	int& rSomeRef = intOne;
//
//	intOne = 5;
//	cout << "intOne:\t" << intOne << endl;
//	cout << "rSomeRef:\t" << rSomeRef << endl;
//
//	int intTwo = 8;
//	rSomeRef = intTwo;
//	cout << "\nintOne:\t" << intOne << endl;
//	cout << "\nintTwo:\t" << intTwo << endl;
//	cout << "rSomeRef:\t" << rSomeRef << endl;
//
//	return 0;
//}

//###################################################################################################

//int add(int x, int y);
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	add(1, 2);
//	return 0;
//}

//###################################################################################################

//完成函数,参数为两个unsigned short int 型数,返回值为第一个参数除以第二个参数的结果,数据类型为short int;
//如果第二个参数为 0,则返回值为-1.在主程序中实现输入输出.

//unsigned short int fun1(unsigned short int a, unsigned short int b)
//{
//	if (b == 0)
//		return -1;
//	short int num = a / b;
//	return num;
//}
//
//int main()
//{
//	unsigned short int a, b;
//
//	cout << "请输入两个无符号短整型数:> ";
//	cin >> a >> b;
//
//	fun1(a, b);
//
//	return 0;
//}

//###################################################################################################

//例3-9 编写函数判别一个数是否是质数,在主程序中实现输入输出

//int fun(int x)
//{
//	if (x == 1 || x == 2)
//		return 1;
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a;
//
//	cout << "请输入一个数:> ";
//	cin >> a;
//
//	int b = fun(a);
//	if (b == 1)
//	{
//		cout << a << "为质数" << endl;
//	}
//	else {
//		cout << a << "不是质数" << endl;
//	}
//
//	return 0;
//}

//###################################################################################################

//例3-10 编写函数求两个整数的最大公约数和最小公倍数

//int fun1(int n1, int n2) // 求最大公约数
//{
//	int n3 = n1 % n2;
//
//	for (; n3 != 0; n3 = n1 % n2)
//	{
//		n1 = n2;
//		n2 = n3;
//	}
//
//	return n2;
//}
//
//int fun2(int n1, int n2) //求最小公倍数
//{
//	int n = fun1(n1, n2);
//
//	return n1 * n2 / n;
//}
//
//int main()
//{
//	int num1, num2;
//
//	cout << "请输入两个整数:> ";
//	cin >> num1 >> num2;
//
//	cout << num1 << " 和 " << num2 << " 的最大公约数为: " << fun1(num1, num2) << endl;
//	cout << num1 << " 和 " << num2 << " 的最小公倍数为: " << fun2(num1, num2) << endl;
//
//	return 0;
//}

//###################################################################################################

//在主程序中提示输入整数n, 编写函数用递归的方法求1 + 2 + 3 + 4 + ... + n 的值.

//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else {
//		return n + fun(n - 1);
//	}
//}
//
//int main()
//{
//	int n;
//
//	cout << "请输入一个正整数:> n = ";
//	cin >> n;
//
//	cout << "1 + 2 + 3 + 4 + ... + n = " << fun(n);
//
//	return 0;
//}

//###################################################################################################

//用递归的方法编写函数求 n 阶勒让德多项式的值, 在主程序中实现输入输出.

//int fun(int n, int x)
//{
//	if (n == 0)
//		return 1;
//	if (n == 1)
//		return x;
//	if (n > 1) {
//		double s = (2 * n - 1) * x * fun(n - 1, x) - (n - 1) * fun(n - 2, x);
//		return s / 2;
//	}
//}
//
//int main()
//{
//	int n, x;
//
//	cout << "请输入要求的阶数和x:> ";
//	cin >> n >> x;
//
//	cout << n << "阶勒让德多项式的值为: " << fun(n, x);
//
//	return 0;
//}

//###################################################################################################