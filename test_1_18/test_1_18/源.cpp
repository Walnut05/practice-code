#include<iostream>
using namespace std;
#include<string>
#define pi 3.14

//##############################################################################################################

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

//##############################################################################################################

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

//##############################################################################################################

//例题2-15 编写一个程序，运行时提示输入一个数字，再把这个数字显示出来
/*int main(void)
{
	int num;
	cout << "请输入一个数字:> ";
	cin >> num;

	cout << num;
	return 0;
}*/

//##############################################################################################################

//例题2-17 打印ASCII码为 32--127 的字符
/*int main(void)
{
	for (int i = 32; i < 128; i++)
	{
		cout << (char)i << " ";
	}

	return 0;
}*/

//##############################################################################################################

//例题2-24 编写一个完整的程序，实现功能：向用户提问“现在正在下雨吗？”，提示用户输入 Y 或 N。
// 若输入为Y，显示“现在正在下雨。”；若输入为N，显示“现在没有下雨。”；否则继续提问“现在正在下雨吗？”。
/*int main(void)
{
	char ch;
	bug:
	cout << "现在正在下雨吗？(请输入 Y 或者 N)" << endl;
	cin >> ch;

	if (ch == 'Y')
	{
		cout << "现在正在下雨." << endl;
	}
	else
	{
		if (ch == 'N')
		{
			cout << "现在没有下雨." << endl;
		}
		else
		{
			cout << "输入错误,重新提问." << endl;
			system("pause");
			system("cls");
			goto bug;
		}
	}

	return 0;
}*/

//不使用goto语句版本
/*int main(void)
{
	char ch;

	while (true)
	{
		cout << "现在正在下雨吗？(Y or N)" << endl;
		cin >> ch;

		if (ch == 'Y')
		{
			cout << "现在正在下雨。" << endl;
			break;
		}
		if (ch == 'N')
		{
			cout << "现在没有下雨。" << endl;
			break;
		}
		system("pause");
		system("cls");
	}

	return 0;
}*/

//##############################################################################################################

//例题2-25 编写一个完整的程序,运行时向用户提问"你考试考了多少分?(0 -- 100)",接收输入后判断其等级显示出来.
//规则如下: 等级 { {优, 90 <= 分数 <= 100}, {良, 80 <= 分数 < 90}, {中, 60 <= 分数 < 80}, {差, 0 <= 分数 < 60} }
/*int main(void)
{
	float sorce;
	
	while (true)
	{
		cout << "你考试考了多少分?(0 -- 100)" << endl;
		cin >> sorce;

		if (sorce >= 0 && sorce <= 100)
		{
			if (sorce >= 90 && sorce <= 100)
			{
				cout << "你的等级是:优" << endl;
				break;
			}
			if (sorce >= 80 && sorce < 90)
			{
				cout << "你的等级是:良" << endl;
				break;
			}
			if (sorce >= 60 && sorce < 80)
			{
				cout << "你的等级是:中" << endl;
				break;
			}
			if (sorce >= 0 && sorce < 60)
			{
				cout << "你的等级是:差" << endl;
				break;
			}
		}
		cout << "请重新输入有效的成绩.\n";
		system("pause");
		system("cls");
	}

	return 0;
}*/

//下面使用switch语句的写法
/*int main(void)
{
	float sorce;

	while (true)
	{
		cout << "你考试考了多少分?(0 -- 100): ";
		cin >> sorce;

		//考虑到一分一分的写case语句太多,除10取商简化
		int sor = sorce / 10;
		switch (sor)
		{
		case 10:
		case 9:
			cout << "你的等级为:优\n";
			return 0;
		case 8:
			cout << "你的等级为:良\n";
			return 0;
		case 7:
		case 6:
			cout << "你的等级为:中\n";
			return 0;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout << "你的等级为:差\n";
			return 0;
		default:
			cout << "请输入正确的成绩.\n";
			system("pause");
			system("cls");
			break;
		}
	}

	return 0;
}*/

//##############################################################################################################

//例2-26 实现一个简单程序，运行时显示“Menu: A(dd) D(elete) S(ort) Q(uit),Select one:”提示用户输入
//A表示增加,D表示删除,S表示排序,Q表示退出,输入为A,D,S时分别提示"数据已经增加,删除,排序."输入为Q时程序结束.

//(1)要求使用if-else语句进行判断,用break,continue控制程序流程.

/*int main(void)
{
	char ch;
	while (true)
	{
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit),Select one: ";
		cin >> ch;

		if (ch == 'A' || ch == 'a')
		{
			cout << "数据已经增加.\n";
			system("pause");
			system("cls");
			continue;
		}
		if (ch == 'D' || ch == 'd')
		{
			cout << "数据已经删除.\n";
			system("pause");
			system("cls");
			continue;
		}
		if (ch == 'S' || ch == 's')
		{
			cout << "数据已经排序.\n";
			system("pause");
			system("cls");
			continue;
		}
		if (ch == 'Q' || ch == 'q')
		{
			break;
		}
		cout << "请输入正确指令!\n";
		system("pause");
		system("cls");
	}


	return 0;
}*/

//(2)要求使用switch语句.

/*int main(void)
{
	char ch;
	
	while (true)
	{
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit),Select one: ";
		cin >> ch;

		switch (ch)
		{
		case 'a':
		case 'A':
			cout << "数据已经增加.\n";
			system("pause");
			system("cls");
			break;
		case 'd':
		case 'D':
			cout << "数据已经删除.\n";
			system("pause");
			system("cls");
			break;
		case 's':
		case 'S':
			cout << "数据已经排序.\n";
			system("pause");
			system("cls");
			break;
		case 'q':
		case 'Q':
			exit(0);
		default:
			cout << "请输入正确的指令.\n";
			system("pause");
			system("cls");
			break;
		}
	}

	return 0;
}*/

//##############################################################################################################



