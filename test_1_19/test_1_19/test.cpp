#include<iostream>
using namespace std;
#include<math.h>

//########################################################################################################

//��2-27 ����ٷ��ҳ�1 -- 100 ������,��ʾ����.�ֱ�ʹ�� while,do-while,forѭ�����ʵ��.

//ʹ��while���ʵ��

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

//ʹ��do-while���ʵ��

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

//ʹ��for���ʵ��

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

//���9 * 9 �˷���

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

//����

//ʵ��һ: ��дһ�������ѻ����¶�ת��Ϊ�����¶�,ת����ʽΪ: C = (F - 32) * 5 / 9.

/*double convert(double& F)
{
	return (F - 32) * 5.0 / 9;
}

int main(void)
{
	double C, F;
	cout << "�����뻪���¶�:> ";
	cin >> F;

	C = convert(F);
	cout << "ת���������¶�Ϊ:> " << C << endl;

	return 0;
}*/

//ʵ���: ��д���غ��� manx1 �ɷֱ���ȡ��������,��������,����˫������,����˫�����������ֵ.

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
	cout << "��������������:> ";
	cin >> x >> y >> z;
	cout << "����������˫������:> ";
	cin >> _x >> _y >> _z;
	
	cout << "��������" << x << "��" << y << "�����ֵΪ: " << manx1(x, y) << endl;
	cout << "��������" << x << "," << y << "��" << z << "�����ֵΪ: " << manx1(x, y, z) << endl;
	cout << "����˫������" << _x << "��" << _y << "�����ֵΪ: " << manx1(_x, _y) << endl;
	cout << "����˫������" << _x << "," << _y << "��" << _z << "�����ֵΪ: " << manx1(_x, _y, _z) << endl;
 
	return 0;
}*/

//ʵ����: ʹ��ϵͳ����pow(x, y)����x^y��ֵ,ע�����ͷ�ļ�math.h.

/*int main(void)
{
	int x, y, _x;

	cout << "��ֱ������������:> ";
	cin >> x >> y;

	_x = pow(x, y);
	
	cout << x << '^' << y << " = " << _x << endl;

	return 0;
}*/

//ʵ����: �õݹ�ķ�����д������ Fibonacci ����,�۲�ݹ���õĹ���.

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
		cout << "�����밴 1 ,�˳��밴 0 :> ";
		cin >> flag;
		system("cls");
		if (flag)
		{
			cout << "������Ҫ���Fibonacci����:> ";
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




