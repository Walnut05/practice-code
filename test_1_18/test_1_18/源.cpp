#include<iostream>
using namespace std;
#include<string>
#define pi 3.14

//ʵ��һ������Ȼ��1-10 �ĺͣ���for �� do ���� while ���ֱ�д
/*int main(void)
{
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 11);

	cout << "sum = " << sum << endl;

	return 0;
}
int main(void)
{
	int sum = 0;
	for (int i = 1; i < 11; i++)
	{
		sum += i;
	}
	cout << "sum = " << sum << "\n";

	return 0;
}*/

//ʵ�������̼���ͼ�ε����������ɼ���Բ�Ρ������Ρ������ε����������ʱ����ʾ�û�ѡ���Ӧ��ͼ��
//Ȼ�󣬶�Բ��Ҫ������뾶��������Ҫ�����볤�Ϳ�������Ҫ������߳������㲢��ʾ�����
/*void S_yuan()
{
	double r, S;
	cout << "������Բ�İ뾶:> ";
	b2:
	cin >> r;

	if (r > 0)
	{
		S = pi * r * r;
		cout << "��Բ�����Ϊ: " << S << "\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "����뾶������������:> ";
		goto b2;
	}
}

void S_chang()
{
	double l, w, S;
	cout << "������˳����εĳ��Ϳ�:> ";
	b3:
	cin >> l >> w;

	if (l > 0 && w > 0)
	{
		S = l * w;
		cout << "�˳����ε����Ϊ: " << S << "\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "����������������������: ";
		goto b3;
	}
}

void S_zheng()
{
	int a, S;
	cout << "������������εı߳�:> ";
	b4:
	cin >> a;

	if (a > 0)
	{
		S = a * a;
		cout << "�������ε����Ϊ: " << S << "\n";
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "����������������������: ";
		goto b4;
	}
}

int main(void)
{
	//�û�����Ҫѡ���ͼ��
	int ange;
	while (true)
	{
		cout << "������Ҫ�����ͼ��:> 1.Բ 2.������ 3.������ (�˳��밴 0 )\n";
	b1: // �������ʱ����������
		cin >> ange;
		switch (ange)
		{
		case 0:
			return 0;
			break;
		case 1:
			system("cls");
			S_yuan();
			break;
		case 2:
			system("cls");
			S_chang();
			break;
		case 3:
			system("cls");
			S_zheng();
			break;
		default:
			cout << "δ�ҵ���ͼ�Σ�������ѡ��:> ";
			goto b1;
		}
	}

	return 0;
}*/

