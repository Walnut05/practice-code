#include<iostream>
using namespace std;

//#############################################################################################################

//例3-5 计算如下公式,并输出结果.
//k = { { sqrt((sin r)^2 + (sin s)^2), r^2 <= s^2 }, { 0.5 * sin (rs), r^2 > s^2 } }
//其中r,s的值由键盘输入.sin x的近似值按如下公式计算:
//sin x = x / 1! - x^3 / 3! + x^5 / 5! - x^7 / 7! + ...
//计算精度为1e-10,当某项的绝对值小于计算精度时,停止累加,累加和即为该精度下的sin x的近似值.

//调试失败

//#include<cmath>
//
//int jie(int x)
//{
//	int sum = 1;
//
//	while (x)
//	{
//		sum *= x;
//		x--;
//	}
//
//	return sum;
//}
//
//double sin1(double x)
//{
//	double sum = 0;
//
//	for (int i = 1, j = 1; fabs(pow(x, i) / jie(i) * pow(-1, j + 1)) >= 1e-10; i += 2, j++)
//	{
//		sum += pow(x, i) / jie(i) * pow(-1, j + 1);
//	}
//
//	return sum;
//}
//
//double my_math(double r, double s)
//{
//	if (r * r > s * s)
//	{
//		return 0.5 * sin1(r * s);
//	}
//	else
//	{
//		return pow(pow(sin1(r), 2) + pow(sin1(s), 2), 0.5);
//	}
//}
//
//int main()
//{
//	double r, s;
//
//	cout << "请输入 r, s的值:> ";
//	cin >> r >> s;
//
//	cout << "k = " << my_math(r, s);
//
//	return 0;
//}

//参考答案

//#include<cmath>
//
//const double TINY_VALUE = 1e-10;
//
//double tsin(double x)
//{
//	double g = 0;
//	double t = x;
//	int n = 1;
//
//	do {
//		g += t;
//		n++;
//		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
//	} while (fabs(t) >= TINY_VALUE);
//
//	return g;
//}
//
//int main()
//{
//	double k, r, s;
//
//	cout << "r = ";
//	cin >> r;
//
//	cout << "s = ";
//	cin >> s;
//
//	if (r * r <= s * s)
//	{
//		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
//	}
//	else
//	{
//		k = tsin(r * s) / 2;
//	}
//
//	cout << k << endl;
//
//	return 0;
//}

//#############################################################################################################

//例3-6 投骰子的随机游戏.
//游戏规则时:每个投资有6个面,点数分别为1,2,3,4,5,6.游戏者在程序开始时输入一个无符号整数,作为产生随机数的种子
//每轮投两次骰子,第一轮如果和数为7或11则为胜,游戏结束;和数为2,3或12则为负,游戏结束;
// 和数为其他值则将此值作为自己的点数,继续第二轮,第三轮...
//直到某轮的和数等于点数则为胜,若在此之前出现和数为7则为负.

//#include<cstdlib>
//
//enum GameStatus{WIN, LOSE, PLAYING};
//
//int rollDice() //投骰子,计算和数,输出和数.
//{
//	int die1 = 1 + rand() % 6;
//	int die2 = 1 + rand() % 6;
//	int sum = die1 + die2;
//	cout << "玩家的骰子和数为" << die1 << " + " << die2 << " = " << sum << endl;
//
//	return sum;
//}
//
//int main()
//{
//	int sum, myPoint;
//	GameStatus status;
//
//	unsigned int seed;
//
//	cout << "请输入一个无符号整数:> ";
//	cin >> seed;
//	srand(seed);
//
//	sum = rollDice();
//
//	switch (sum) // 进行第一轮游戏
//	{
//	case 7:
//	case 11:
//		status = WIN;
//		break;
//	case 2:
//	case 3:
//	case 12:
//		status = LOSE;
//		break;
//	default:
//		status = PLAYING;
//		myPoint = sum;
//		cout << "我的点数为: " << myPoint << endl;
//		break;
//	}
//
//	while (status == PLAYING) //进行后几轮游戏
//	{
//		sum = rollDice();
//		if (sum == myPoint)
//		{
//			status = WIN;
//		}
//		else
//		{
//			if (sum == 7)
//			{
//				status = LOSE;
//				break;
//			}
//		}
//	}
//
//	if (status == WIN)
//	{
//		cout << "玩家获胜!" << endl;
//	}
//	else
//	{
//		cout << "玩家失败!" << endl;
//	}
//	return 0;
//}

//#############################################################################################################



//#############################################################################################################