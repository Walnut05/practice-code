#include<iostream>
using namespace std;
#include<string>
#define pi 3.14

//##############################################################################################################

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

//##############################################################################################################

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

//##############################################################################################################

//����2-15 ��дһ����������ʱ��ʾ����һ�����֣��ٰ����������ʾ����
/*int main(void)
{
	int num;
	cout << "������һ������:> ";
	cin >> num;

	cout << num;
	return 0;
}*/

//##############################################################################################################

//����2-17 ��ӡASCII��Ϊ 32--127 ���ַ�
/*int main(void)
{
	for (int i = 32; i < 128; i++)
	{
		cout << (char)i << " ";
	}

	return 0;
}*/

//##############################################################################################################

//����2-24 ��дһ�������ĳ���ʵ�ֹ��ܣ����û����ʡ��������������𣿡�����ʾ�û����� Y �� N��
// ������ΪY����ʾ�������������ꡣ����������ΪN����ʾ������û�����ꡣ��������������ʡ��������������𣿡���
/*int main(void)
{
	char ch;
	bug:
	cout << "��������������(������ Y ���� N)" << endl;
	cin >> ch;

	if (ch == 'Y')
	{
		cout << "������������." << endl;
	}
	else
	{
		if (ch == 'N')
		{
			cout << "����û������." << endl;
		}
		else
		{
			cout << "�������,��������." << endl;
			system("pause");
			system("cls");
			goto bug;
		}
	}

	return 0;
}*/

//��ʹ��goto���汾
/*int main(void)
{
	char ch;

	while (true)
	{
		cout << "��������������(Y or N)" << endl;
		cin >> ch;

		if (ch == 'Y')
		{
			cout << "�����������ꡣ" << endl;
			break;
		}
		if (ch == 'N')
		{
			cout << "����û�����ꡣ" << endl;
			break;
		}
		system("pause");
		system("cls");
	}

	return 0;
}*/

//##############################################################################################################

//����2-25 ��дһ�������ĳ���,����ʱ���û�����"�㿼�Կ��˶��ٷ�?(0 -- 100)",����������ж���ȼ���ʾ����.
//��������: �ȼ� { {��, 90 <= ���� <= 100}, {��, 80 <= ���� < 90}, {��, 60 <= ���� < 80}, {��, 0 <= ���� < 60} }
/*int main(void)
{
	float sorce;
	
	while (true)
	{
		cout << "�㿼�Կ��˶��ٷ�?(0 -- 100)" << endl;
		cin >> sorce;

		if (sorce >= 0 && sorce <= 100)
		{
			if (sorce >= 90 && sorce <= 100)
			{
				cout << "��ĵȼ���:��" << endl;
				break;
			}
			if (sorce >= 80 && sorce < 90)
			{
				cout << "��ĵȼ���:��" << endl;
				break;
			}
			if (sorce >= 60 && sorce < 80)
			{
				cout << "��ĵȼ���:��" << endl;
				break;
			}
			if (sorce >= 0 && sorce < 60)
			{
				cout << "��ĵȼ���:��" << endl;
				break;
			}
		}
		cout << "������������Ч�ĳɼ�.\n";
		system("pause");
		system("cls");
	}

	return 0;
}*/

//����ʹ��switch����д��
/*int main(void)
{
	float sorce;

	while (true)
	{
		cout << "�㿼�Կ��˶��ٷ�?(0 -- 100): ";
		cin >> sorce;

		//���ǵ�һ��һ�ֵ�дcase���̫��,��10ȡ�̼�
		int sor = sorce / 10;
		switch (sor)
		{
		case 10:
		case 9:
			cout << "��ĵȼ�Ϊ:��\n";
			return 0;
		case 8:
			cout << "��ĵȼ�Ϊ:��\n";
			return 0;
		case 7:
		case 6:
			cout << "��ĵȼ�Ϊ:��\n";
			return 0;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout << "��ĵȼ�Ϊ:��\n";
			return 0;
		default:
			cout << "��������ȷ�ĳɼ�.\n";
			system("pause");
			system("cls");
			break;
		}
	}

	return 0;
}*/

//##############################################################################################################

//��2-26 ʵ��һ���򵥳�������ʱ��ʾ��Menu: A(dd) D(elete) S(ort) Q(uit),Select one:����ʾ�û�����
//A��ʾ����,D��ʾɾ��,S��ʾ����,Q��ʾ�˳�,����ΪA,D,Sʱ�ֱ���ʾ"�����Ѿ�����,ɾ��,����."����ΪQʱ�������.

//(1)Ҫ��ʹ��if-else�������ж�,��break,continue���Ƴ�������.

/*int main(void)
{
	char ch;
	while (true)
	{
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit),Select one: ";
		cin >> ch;

		if (ch == 'A' || ch == 'a')
		{
			cout << "�����Ѿ�����.\n";
			system("pause");
			system("cls");
			continue;
		}
		if (ch == 'D' || ch == 'd')
		{
			cout << "�����Ѿ�ɾ��.\n";
			system("pause");
			system("cls");
			continue;
		}
		if (ch == 'S' || ch == 's')
		{
			cout << "�����Ѿ�����.\n";
			system("pause");
			system("cls");
			continue;
		}
		if (ch == 'Q' || ch == 'q')
		{
			break;
		}
		cout << "��������ȷָ��!\n";
		system("pause");
		system("cls");
	}


	return 0;
}*/

//(2)Ҫ��ʹ��switch���.

/*int main(void)
{
	char ch;
	
	while (true)
	{
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit),Select one: ";
		cin >> ch;

		switch (ch)
		{
		case 'a':
		case 'A':
			cout << "�����Ѿ�����.\n";
			system("pause");
			system("cls");
			break;
		case 'd':
		case 'D':
			cout << "�����Ѿ�ɾ��.\n";
			system("pause");
			system("cls");
			break;
		case 's':
		case 'S':
			cout << "�����Ѿ�����.\n";
			system("pause");
			system("cls");
			break;
		case 'q':
		case 'Q':
			exit(0);
		default:
			cout << "��������ȷ��ָ��.\n";
			system("pause");
			system("cls");
			break;
		}
	}

	return 0;
}*/

//##############################################################################################################



