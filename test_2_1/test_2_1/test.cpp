#include<iostream>
using namespace std;


//########################################################################################################

//��3-1 ��дһ����x��n�η��ĺ���

/*float my_pow(float x, float n)
{
	float sum = 1;
	
	while (n)
	{
		sum *= x;
		n--;
	}

	return sum;
}

int main()
{
	float n, x;

	cout << "�����������ָ��:> ";
	cin >> x >> n;

	cout << x << "��" << n << "�η�Ϊ" << my_pow(x, n);

	return 0;
}*/

//########################################################################################################

//��3-2 ����һ��8λ��������,����ת��Ϊʮ���������
//������3-1�е�my_pow����

/*float my_pow(float x, float n)
{
	float sum = 1;

	while (n)
	{
		sum *= x;
		n--;
	}

	return sum;
}

int my_judge(long number)
{
	do {
		int temp = number % 10;
		if (temp != 1 && temp != 0)
		{
			return 0;
		}
		number /= 10;

	} while (number);

	return 1;
}

long my_swap(long num)
{
	int i = 0;
	long sum = 0;
	do {
		int temp = num % 10;
		sum += (my_pow(2, i) * temp);
		num /= 10;
		i++;
	} while (num);
	return sum;
}

int main()
{
	b1:
	cout << "����Ҫת���Ķ�������:>";
	long number;
	cin >> number;

	//�жϴ����Ƿ�Ϊ��������
	if (my_judge(number))
	{
		cout << number << "ת��Ϊʮ����Ϊ:" << my_swap(number);
	}
	else {
		cout << "����ȷ����һ����������!\n";
		system("pause");
		system("cls");
		goto b1;
	}
	return 0;
}*/

//########################################################################################################

//��д������(PI)��ֵ,��ʽ����:
//�� = 16arctan(1/5) - 4arctan(1/239).
//����arctan��������ʽ�ļ�������:
//arctan x = x - x^3/3 + x^5/5 - x^7/7+ ......
//ֱ������ĳ�����ֵ������e-15Ϊֹ;����x��Ϊdouble��.

//double arctan(double x)
//{
//	double sum = 0;
//
//	for (int i = 1; pow(x, i) / i >= 1e-15; i += 2)
//	{
//		sum += pow(-1, i + 1) * pow(x, i) / i;
//	}
//	
//	return sum;
//}
//
//int main()
//{
//	double PI;
//
//	PI = 16.0 * arctan(1.0 / 5) - 4.0 * arctan(1.0 / 239);
//
//	cout << "PI = " << PI << endl;
//
//	return 0;
//}

//double arctan(double x)
//{
//	double sqr = x * x;
//	double e = x;
//	double r = 0;
//	int i = 1;
//	while (e / i > 1e-15)
//	{
//		double f = e / i;
//		r = (i % 4 == 1) ? r + f : r - f;
//		e = e * sqr;
//		i += 2;
//	}
//	return r;
//}
//
//int main()
//{
//	double a = 16.0 * arctan(1 / 5.0);
//	double b = 4.0 * arctan(1 / 239.0);
//
//	cout << "PI = " << a - b << endl;
//	return 0;
//}

//########################################################################################################

//Ѱ�Ҳ���� 11 -- 999 ���� m,������m,m^2��m^3��Ϊ������.
//��ν��������ָ���λ�������ҶԳƵ�����.����:121,676,94249��.������������������m = 11,m^2 = 121,m^3 = 1331.

//int judge(int m)
//{
//	int n = 0;
//	while (m)
//	{
//		m /= 10;
//		n++;
//	}
//	return n;
//}
//
//int judge(int m, int n)
//{
//	int num = m;
//	int sum = 0;
//	int N = n;
//
//	for (int i = 0; i < N; i++)
//	{
//		int temp = m % 10;
//		sum += temp * pow(10, n - 1);
//		n--;
//		m /= 10;
//	}
//	
//	if (sum == num)
//	{
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main()
//{
//	for (int i = 11; i < 1000; i++)
//	{
//		if (judge(i, judge(i)) == 1 &&
//			judge(i * i, judge(i * i)) == 1 &&
//			judge(i * i * i, judge(i * i * i)) == 1)
//		{
//			cout << i << " ";
//		}
//	}
//
//	return 0;
//}

//########################################################################################################