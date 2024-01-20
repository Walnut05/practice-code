#include<iostream>
using namespace std;
#include<math.h>

//########################################################################################################

//例2-27 用穷举法找出1 -- 100 的质数,显示出来.分别使用 while,do-while,for循环语句实现.

//使用while语句实现

/*int main(void)
{
	int num = 2, D_num;
	int flag;
	while (num < 101)
	{
		flag = 1;
		D_num = 2;
		while (D_num < num)
		{
			if (num % D_num == 0)
			{
				flag = 0;
				break;
			}
			D_num++;
		}
		if (flag)
		{
			cout << num << " ";
		}
		num++;
	}


	return 0;
}*/

//使用do-while语句实现

/*int main(void)
{
	int num = 2, D_num;
	int flag;

	do
	{
		flag = 1;
		D_num = 2;
		while (D_num < num)
		{
			if (num % D_num == 0)
			{
				flag = 0;
				break;
			}
			D_num++;
		}
		if (flag)
		{
			cout << num << " ";
		}
		num++;
	} while (num < 101);

	return 0;
}*/

//使用for语句实现

/*int main(void)
{
	int num, D_num;
	int flag;

	for (num = 2; num < 101; num++)
	{
		flag = 1;
		for (D_num = 2; D_num < num; D_num++)
		{
			if (num % D_num == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cout << num << " ";
		}
	}

	return 0;
}*/

//########################################################################################################

//输出9 * 9 乘法表

/*int main(void)
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << " * " << i << " = " << i * j << "  ";
		}
		cout << endl;
	}

	return 0;
}*/

//########################################################################################################

//函数

//实验一: 编写一个函数把华氏温度转换为摄氏温度,转换公式为: C = (F - 32) * 5 / 9.

/*double convert(double& F)
{
	return (F - 32) * 5.0 / 9;
}

int main(void)
{
	double C, F;
	cout << "请输入华氏温度:> ";
	cin >> F;

	C = convert(F);
	cout << "转换的摄氏温度为:> " << C << endl;

	return 0;
}*/

//实验二: 编写重载函数 manx1 可分别求取两个整数,三个整数,两个双精度数,三个双精度数的最大值.

/*int manx1(int& x, int& y)
{
	return x > y ? x : y;
}

int manx1(int& x, int& y, int& z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}

double manx1(double& x, double& y)
{
	return x > y ? x : y;
}

double manx1(double& x, double& y, double& z)
{
	double max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}

int main(void)
{
	int x, y, z;
	double _x, _y, _z;
	cout << "请输入三个整数:> ";
	cin >> x >> y >> z;
	cout << "请输入三个双精度数:> ";
	cin >> _x >> _y >> _z;
	
	cout << "两个整数" << x << "和" << y << "的最大值为: " << manx1(x, y) << endl;
	cout << "三个整数" << x << "," << y << "和" << z << "的最大值为: " << manx1(x, y, z) << endl;
	cout << "两个双精度数" << _x << "和" << _y << "的最大值为: " << manx1(_x, _y) << endl;
	cout << "三个双精度数" << _x << "," << _y << "和" << _z << "的最大值为: " << manx1(_x, _y, _z) << endl;
 
	return 0;
}*/

//实验三: 使用系统函数pow(x, y)计算x^y的值,注意包含头文件math.h.

/*int main(void)
{
	int x, y, _x;

	cout << "请分别输入底数和幂:> ";
	cin >> x >> y;

	_x = pow(x, y);
	
	cout << x << '^' << y << " = " << _x << endl;

	return 0;
}*/

//实验四: 用递归的方法编写函数求 Fibonacci 级数,观察递归调用的过程.

/*int Fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void)
{
	int n, flag;

	while (true)
	{
		cout << "进入请按 1 ,退出请按 0 :> ";
		cin >> flag;
		system("cls");
		if (flag)
		{
			cout << "请输入要求的Fibonacci级数:> ";
			cin >> n;

			cout << "Fibonacci(" << n << ") = " << Fibonacci(n) << endl;

			system("pause");
			system("cls");
		}
		else
		{
			break;
		}
	}

	return 0;
}*/




