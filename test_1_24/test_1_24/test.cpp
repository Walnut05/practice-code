#include<iostream>
using namespace std;

const float PI = 3.1416;

//#####################################################################################################

//��ϰ

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
//	//auto a = PI; // auto �ñ��������ݳ�ʼֵ�������Զ��ƶϱ���������
//	//decltype(PI) b = 3; // decltype ����һ��������ĳһ���ʽ��������ͬ,���ǲ����øñ��ʽ��ʼ���ñ���,������Ҫ decltype.
//
//	cout << !(3 > 5) || (6 < 2);
//
//
//	return 0;
//}

//#####################################################################################################

//ϰ�� 2-11 дһ��for���,��������Ϊn�� 100 �� 200,����Ϊ 2 ,Ȼ����while �� do...while���ͬ����ѭ��.

/*int main(void)
{
	//��for���ʵ��
	for (int i = 100; i <= 200; i += 2);

	//��while���ʵ��
	int i = 100;
	while (i <= 200)
	{
		i += 2;
	}

	//��do...while���ʵ��
	int j = 100;
	do {
		j += 2;
	} while (j <= 200);

	return 0;
}*/

//#####################################################################################################

//ϰ�� 2-13 ��֪x,y��������,дһ���򵥵�if���,�ѽ�С��ֵ����ԭ���ϴ�ı���.

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

//ϰ�� 2-15 ��дһ������,����ʱ��ʾ����һ������,�ٰ����������ʾ����

/*int main(void)
{
	int num;
	
	cout << "Enter a number:> ";
	cin >> num;

	cout << "the number is " << num << endl;

	return 0;
}*/

//#####################################################################################################

//ϰ�� 2-16 �����ʾ��ʹ�õļ�����еĸ����������͵��ֽ���

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

//ϰ�� 2-29 �ڳ����ж���һ�����ͱ���,���� 1 -- 100 ��ֵ
//Ҫ���û��������,�Ƚ��������Ĵ�С,�ѽ����ʾ���û�,ֱ���¶�Ϊֹ.

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
