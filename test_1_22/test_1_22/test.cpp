#include<iostream>
using namespace std;

//###########################################################################################################

//例 2-2 输入一个年份,判断是否为闰年.

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

//例 2-3 比较两个数的大小

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

//例 2-4 输入一个 0--6 的整数,转换成星期输出.

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
		cout << "请输入正确的数字.";
		break;
	}

	return 0;
}*/

//###########################################################################################################

//例 2-5 求自然数 1--10 的和.使用while语句

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

//例 2-6 输入一个整数,将各位数字反转后输出.使用do...while语句

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

//###########################################################################################################

//例 2-8 输入一个整数,求出它的所有因子.

/*int main(void)
{
	int n;

	cout << "Enter a number:> ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}*/

//例 2-10 读入一系列整数,统计出正整数个数i和负整数个数j,读入0则结束.

//法一
/*int main(void)
{
	int arr[100] = { 0 };
	int i = 0, j = 0;

	cout << "Enter numbers:> ";
	for (int m = 0, n; m < 100; m++)
	{
		cin >> n;
		if (n == 0)
			break;
		arr[m] = n;
	}

	for (int m = 0; arr[m] != 0; m++)
	{
		if (arr[m] > 0)
		{
			i++;
		}
		else
		{
			j++;
		}
	}

	cout << "总共有正数" << i << "个,有负数" << j << "个" << endl;

	return 0;
}*/

//法二
/*int main(void)
{
	int n;
	int i = 0, j = 0;

	cout << "Enter numbers:> ";
	cin >> n;

	while (n != 0)
	{
		if (n > 0)
			i++;
		else j++;
		cin >> n;
	}

	cout << "总共有正数" << i << "个" << endl;
	cout << "总共有负数" << j << "个" << endl;

	return 0;
}*/

//###########################################################################################################





