#include<iostream>
using namespace std;

//#############################################################################################################

//��3-5 �������¹�ʽ,��������.
//k = { { sqrt((sin r)^2 + (sin s)^2), r^2 <= s^2 }, { 0.5 * sin (rs), r^2 > s^2 } }
//����r,s��ֵ�ɼ�������.sin x�Ľ���ֵ�����¹�ʽ����:
//sin x = x / 1! - x^3 / 3! + x^5 / 5! - x^7 / 7! + ...
//���㾫��Ϊ1e-10,��ĳ��ľ���ֵС�ڼ��㾫��ʱ,ֹͣ�ۼ�,�ۼӺͼ�Ϊ�þ����µ�sin x�Ľ���ֵ.

//����ʧ��

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
//	cout << "������ r, s��ֵ:> ";
//	cin >> r >> s;
//
//	cout << "k = " << my_math(r, s);
//
//	return 0;
//}

//�ο���

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

//��3-6 Ͷ���ӵ������Ϸ.
//��Ϸ����ʱ:ÿ��Ͷ����6����,�����ֱ�Ϊ1,2,3,4,5,6.��Ϸ���ڳ���ʼʱ����һ���޷�������,��Ϊ���������������
//ÿ��Ͷ��������,��һ���������Ϊ7��11��Ϊʤ,��Ϸ����;����Ϊ2,3��12��Ϊ��,��Ϸ����;
// ����Ϊ����ֵ�򽫴�ֵ��Ϊ�Լ��ĵ���,�����ڶ���,������...
//ֱ��ĳ�ֵĺ������ڵ�����Ϊʤ,���ڴ�֮ǰ���ֺ���Ϊ7��Ϊ��.

//#include<cstdlib>
//
//enum GameStatus{WIN, LOSE, PLAYING};
//
//int rollDice() //Ͷ����,�������,�������.
//{
//	int die1 = 1 + rand() % 6;
//	int die2 = 1 + rand() % 6;
//	int sum = die1 + die2;
//	cout << "��ҵ����Ӻ���Ϊ" << die1 << " + " << die2 << " = " << sum << endl;
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
//	cout << "������һ���޷�������:> ";
//	cin >> seed;
//	srand(seed);
//
//	sum = rollDice();
//
//	switch (sum) // ���е�һ����Ϸ
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
//		cout << "�ҵĵ���Ϊ: " << myPoint << endl;
//		break;
//	}
//
//	while (status == PLAYING) //���к�����Ϸ
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
//		cout << "��һ�ʤ!" << endl;
//	}
//	else
//	{
//		cout << "���ʧ��!" << endl;
//	}
//	return 0;
//}

//#############################################################################################################



//#############################################################################################################