#include<iostream>
using namespace std;

//###################################################################################################

//��3-8 ��n!

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
//	cout << "������Ҫ��׳˵�����:> ";
//	cin >> n;
//
//	cout << n << "! = " << My_jie(n);
//
//	return 0;
//}

//###################################################################################################

//�õݹ鷨�����n������ѡ��k�������һ��ίԱ��Ĳ�ͬ�����.
//��n������ѡk���˵������ = ��n - 1������ѡk���˵������ + ��n - 1������ѡk - 1���˵������

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
//	cout << "�ܹ��ж�����:> ";
//	cin >> n;
//	cout << "Ҫѡ�������:> ";
//	cin >> k;
//
//	if (n >= k)
//	{
//		cout << n << "������ѡ" << k << "������" << My_xuan(n, k) << "��ѡ��.";
//	}
//	else {
//		cout << "ѡ�����,������ѡ��.";
//		system("pause");
//		system("cls");
//		goto b1;
//	}
//
//	return 0;
//}

//###################################################################################################

//��ŵ������.

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
//	cout << "�������м�������:> ";
//	cin >> m;
//
//	cout << "�� " << m << " �������ƶ��Ĳ���Ϊ: " << endl;
//	hanoi(m, 'A', 'B', 'C');
//
//	return 0;
//}

//###################################################################################################

//��3-15 ��Ĭ���β�ֵ�ĺ�������.
//������Ĺ����Ǽ��㳤��������.�Ӻ���getVolume�Ǽ�������ĺ���,�������β�:
// length(��),height(��),width(��).����width ��height����Ĭ��ֵ.
// ���������Բ�ͬ��ʽ����getVolume����,������������гɹ�.

//int getVolume(int length, int height = 6, int width = 10);
//
//int main()
//{
//	int length, height, width;
//
//	cout << "length: " << 6 << " Volume is " << getVolume(6) << endl;
//
//	cout << "�����볤,��,��: ";
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

//��3-16 ���غ���Ӧ�þ���
//��д������Ϊ sumOfSquare �����غ���,�ֱ�����������ƽ���ͼ���ʵ����ƽ����.

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