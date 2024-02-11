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
//###################################################################################################