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

//ϵͳ����Ӧ�þ���
//��3-17 �Ӽ�������һ���Ƕ�ֵ,����ýǶȵ�����ֵ,����ֵ������ֵ
//����:ϵͳ�������ṩ��������ֵ,����ֵ������ֵ�ĺ���:sin(),cos().tan(),������˵����ͷ�ļ�cmath��

//#include<cmath>
//
//const int PI = 3.14159265358979;
//
//int main()
//{
//	double angle;
//
//	cout << "������һ���Ƕ�:> ";
//	cin >> angle;                  //����Ƕ�ֵ
//
//	double radian = angle * PI / 180;    //ת��Ϊ������
//
//	cout << "sin " << angle << " = " << sin(radian) << endl
//		<< "cos " << angle << " = " << cos(radian) << endl
//		<< "tan " << angle << " = " << tan(radian) << endl;
//
//	return 0;
//}

//###################################################################################################

//�۲�������������,���Լ����������Ƚ�,�кβ�ͬ?

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

//��ɺ���,����Ϊ����unsigned short int ����,����ֵΪ��һ���������Եڶ��������Ľ��,��������Ϊshort int;
//����ڶ�������Ϊ 0,�򷵻�ֵΪ-1.����������ʵ���������.

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
//	cout << "�����������޷��Ŷ�������:> ";
//	cin >> a >> b;
//
//	fun1(a, b);
//
//	return 0;
//}

//###################################################################################################

//��3-9 ��д�����б�һ�����Ƿ�������,����������ʵ���������

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
//	cout << "������һ����:> ";
//	cin >> a;
//
//	int b = fun(a);
//	if (b == 1)
//	{
//		cout << a << "Ϊ����" << endl;
//	}
//	else {
//		cout << a << "��������" << endl;
//	}
//
//	return 0;
//}

//###################################################################################################

//��3-10 ��д�������������������Լ������С������

//int fun1(int n1, int n2) // �����Լ��
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
//int fun2(int n1, int n2) //����С������
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
//	cout << "��������������:> ";
//	cin >> num1 >> num2;
//
//	cout << num1 << " �� " << num2 << " �����Լ��Ϊ: " << fun1(num1, num2) << endl;
//	cout << num1 << " �� " << num2 << " ����С������Ϊ: " << fun2(num1, num2) << endl;
//
//	return 0;
//}

//###################################################################################################

//������������ʾ��������n, ��д�����õݹ�ķ�����1 + 2 + 3 + 4 + ... + n ��ֵ.

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
//	cout << "������һ��������:> n = ";
//	cin >> n;
//
//	cout << "1 + 2 + 3 + 4 + ... + n = " << fun(n);
//
//	return 0;
//}

//###################################################################################################

//�õݹ�ķ�����д������ n �����õ¶���ʽ��ֵ, ����������ʵ���������.

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
//	cout << "������Ҫ��Ľ�����x:> ";
//	cin >> n >> x;
//
//	cout << n << "�����õ¶���ʽ��ֵΪ: " << fun(n, x);
//
//	return 0;
//}

//###################################################################################################