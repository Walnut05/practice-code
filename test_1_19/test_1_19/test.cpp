#include<iostream>
using namespace std;

//########################################################################################################

//例2-27 用穷举法找出1 -- 100 的质数,显示出来.分别使用 while,do-while,for循环语句实现.

//使用while语句实现

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

//使用do-while语句实现

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

//使用for语句实现

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

