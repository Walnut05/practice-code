#include<iostream>
using namespace std;

//###########################################################################################################

//�� 2-2 ����һ�����,�ж��Ƿ�Ϊ����.

/*int main(void)
{
	int year;
	bool isLeapyear;

	cout << "Enter the year: " << endl;
	cin >> year;

	isLeapyear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

	if (isLeapyear)
	{
		cout << year << " is a leap year" << endl;
	}
	else
	{
		cout << year << "is not a leap year" << endl;
	}

	return 0;
}*/

//###########################################################################################################

//�� 2-3 �Ƚ��������Ĵ�С

/*int main(void)
{
	int num1, num2;

	cout << "Enter two numbers:> ";
	cin >> num1 >> num2;

	if (num1 == num2)
	{
		cout << num1 << " = " << num2;
	}
	else
	{
		if (num1 > num2)
		{
			cout << num1 << " > " << num2;
		}
		else
		{
			cout << num1 << " < " << num2;
		}
	}

	return 0;
}*/

//###########################################################################################################

//�� 2-4 ����һ�� 0--6 ������,ת�����������.

/*int main(void)
{
	int num;

	cout << "Enter a number(0 -- 6):> ";
	cin >> num;

	switch (num)
	{
	case 0:
		cout << "Monday" << endl;
		break;
	case 1:
		cout << "Tuesday" << endl;
		break;
	case 2:
		cout << "Wednesday" << endl;
		break;
	case 3:
		cout << "Thursday" << endl;
		break;
	case 4:
		cout << "Friday" << endl;
		break;
	case 5:
		cout << "Saturday" << endl;
		break;
	case 6:
		cout << "Sunday" << endl;
		break;
	default:
		cout << "��������ȷ������.";
		break;
	}

	return 0;
}*/

//###########################################################################################################

//�� 2-5 ����Ȼ�� 1--10 �ĺ�.ʹ��while���

/*int main(void)
{
	int i = 1, sum = 0;

	while (i < 11)
	{
		sum += i;
		i++;
	}

	cout << "1 + 2 + ...... + 10 = " << sum << endl;

	return 0;
}*/

//�� 2-6 ����һ������,����λ���ַ�ת�����.ʹ��do...while���

/*int main(void)
{
	int num;

	cout << "Enter a number:> ";
	cin >> num;

	do {
		cout << num % 10 << " ";
		num /= 10;
	} while (num != 0);

	return 0;
}*/



