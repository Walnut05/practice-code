#include<iostream>
using namespace std;

const float PI = 3.1416;

//#####################################################################################################

//练习

//int main(void)
//{
//	/*short a = -1;
//	unsigned short b = 65535;
//	int c, d;
//	c = a;
//	d = b;
//
//	cout << c << " " << d;
//
//	return 0;*/
//
//	/*float a = PI;
//	cout << a;*/
//
//	//auto a = PI; // auto 让编译器根据初始值的类型自动推断变量的类型
//	//decltype(PI) b = 3; // decltype 定义一个变量与某一表达式的类型相同,但是不想用该表达式初始化该变量,这是需要 decltype.
//
//	cout << !(3 > 5) || (6 < 2);
//
//
//	return 0;
//}

//#####################################################################################################

//习题 2-11 写一条for语句,计数条件为n从 100 到 200,步长为 2 ,然后用while 和 do...while完成同样的循环.

/*int main(void)
{
	//用for语句实现
	for (int i = 100; i <= 200; i += 2);

	//用while语句实现
	int i = 100;
	while (i <= 200)
	{
		i += 2;
	}

	//用do...while语句实现
	int j = 100;
	do {
		j += 2;
	} while (j <= 200);

	return 0;
}*/

//#####################################################################################################

//习题 2-13 已知x,y两个变量,写一条简单的if语句,把较小的值赋给原本较大的变量.

/*int main(void)
{
	int x, y;
	cin >> x >> y;

	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	else {
		int temp = x;
		x = y;
		y = temp;
	}

	return 0;
}*/

//#####################################################################################################

//习题 2-15 编写一个程序,运行时提示输入一个数字,再把这个数字显示出来

/*int main(void)
{
	int num;
	
	cout << "Enter a number:> ";
	cin >> num;

	cout << "the number is " << num << endl;

	return 0;
}*/

//#####################################################################################################

//习题 2-16 编程显示你使用的计算机中的各种数据类型的字节数

/*int main(void)
{
	cout << "The sizeof(int) = " << sizeof(int) << endl;
	cout << "The sizeof(bool) = " << sizeof(bool) << endl;
	cout << "The sizeof(char) = " << sizeof(char) << endl;
	cout << "The sizeof(float) = " << sizeof(float) << endl;
	cout << "The sizeof(double) = " << sizeof(double) << endl;

	return 0;
}*/

//#####################################################################################################

//习题 2-29 在程序中定义一个整型变量,赋以 1 -- 100 的值
//要求用户猜这个数,比较两个数的大小,把结果提示给用户,直到猜对为止.

/*int main(void)
{
	int num, _num;

	cin >> num;
	system("cls");

	while (true)
	{
		cout << "Enter number:> ";
		cin >> _num;

		if (_num > num)
		{
			cout << "Guess big" << endl;
		}
		if (_num < num)
		{
			cout << "Guess small" << endl;
		}
		if (_num == num)
		{
			cout << "Congratulations, you guessed it" << endl;
			system("pause");
			system("cls");
			return 0;
		}
	}

	return 0;
}*/
