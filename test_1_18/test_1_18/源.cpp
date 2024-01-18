#include<iostream>
using namespace std;
#include<string>
#define pi 3.14

//实验一：求自然数1-10 的和，用for 和 do …… while 语句分别写
/*int main(void)
{
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 11);

	cout << "sum = " << sum << endl;

	return 0;
}
int main(void)
{
	int sum = 0;
	for (int i = 1; i < 11; i++)
	{
		sum += i;
	}
	cout << "sum = " << sum << "\n";

	return 0;
}*/

//实验二：编程计算图形的面积。程序可计算圆形、长方形、正方形的面积，运行时先提示用户选择对应的图形
//然后，对圆形要求输入半径，长方形要求输入长和宽，正方形要求输入边长，计算并显示面积。
/*void S_yuan()
{
	double r, S;
	cout << "请输入圆的半径:> ";
	b2:
	cin >> r;

	if (r > 0)
	{
		S = pi * r * r;
		cout << "此圆的面积为: " << S << "\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "输入半径有误，重新输入:> ";
		goto b2;
	}
}

void S_chang()
{
	double l, w, S;
	cout << "请输入此长方形的长和宽:> ";
	b3:
	cin >> l >> w;

	if (l > 0 && w > 0)
	{
		S = l * w;
		cout << "此长方形的面积为: " << S << "\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "输入数据有误，请重新输入: ";
		goto b3;
	}
}

void S_zheng()
{
	int a, S;
	cout << "请输入此正方形的边长:> ";
	b4:
	cin >> a;

	if (a > 0)
	{
		S = a * a;
		cout << "此正方形的面积为: " << S << "\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "输入数据有误，请重新输入: ";
		goto b4;
	}
}

int main(void)
{
	//用户输入要选择的图形
	int ange;
	while (true)
	{
		cout << "请输入要计算的图形:> 1.圆 2.长方形 3.正方形 (退出请按 0 )\n";
	b1: // 输入错误时，重新输入
		cin >> ange;
		switch (ange)
		{
		case 0:
			return 0;
			break;
		case 1:
			system("cls");
			S_yuan();
			break;
		case 2:
			system("cls");
			S_chang();
			break;
		case 3:
			system("cls");
			S_zheng();
			break;
		default:
			cout << "未找到该图形，请重新选择:> ";
			goto b1;
		}
	}

	return 0;
}*/

