#include<iostream>
using namespace std;
#include<string>
#include<utility>

//#######################################################################################

//���ƹ��캯����Ӧ��

//����һ������

//class Point
//{
//public:
//	//�������캯��
//	Point(int xx, int yy)
//	{
//		x = xx;
//		y = yy;
//	}
//	//��ֵ���캯��������
//	Point(Point& p);
//	//�����Ϊ
//	int getX() { return x; }
//	int getY() { return y; }
//
//private:
//	int x, y;
//};
//
////��ֵ���캯����ʵ��
//
//Point::Point(Point& p)
//{
//	x = p.getX();
//	y = p.getY();
//	cout << "���Ƴɹ�!" << endl;
//}

//#######################################################################################

//�ƶ����캯��Ӧ��

//class Mystr
//{
//public:
//	string s;
//
//	Mystr() : s(" ") {}                      //�޲ι��캯��
//
//	Mystr(string _s) : s(std::move(_s)) {}   //�вι��캯��
//
//	Mystr(Mystr &&str) noexcept              //��֪�����������׳��쳣
//		: s(std::move(str.s)){}              //�ƶ����캯��
//
//};

//#######################################################################################

//int main()
//{
//	Point a(0, 0);     //����һ������ a
//	Point b(a);        //��a��ʼ��b
//	Point c = a;       //��a��ʼ��c
//
//	cout << "a : " << a.getX() << " , " << a.getY() << endl;
//	cout << "b : " << b.getX() << " , " << b.getY() << endl;
//	cout << "c : " << c.getX() << " , " << c.getY() << endl;
//
//	return 0;
//}

//#######################################################################################

//��4-3 ��Ӿ�ظ���Ԥ��,Circle��
//դ������35 Ԫ/��, �������Ϊ20 Ԫ/ƽ����. �������Ϊ3��,��Ӿ�ذ뾶�ɼ�������.
//Ҫ����㲢���������դ�������.

const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCERTE_PRICE = 20;

//Բ��Ķ���

class Circle
{
public:    //�ⲿ�ӿ�
	Circle(float r);           //���캯��
	float zhouchang();         //�����ܳ�
	float area();              //�������

private:   //˽�����ݳ�Ա
	float ri;                  //�뾶
};

Circle::Circle(float r):ri(r){} //���캯����ʵ��

float Circle::zhouchang()       //�����ܳ�������ʵ��
{
	return ri * PI * 2;
}

float Circle::area()            //�������������ʵ��
{
	return PI * ri * ri;
}

//������

int main()
{
	float r = 0;           //�����뾶
	cout << "��������Ӿ�صİ뾶(��λ:��):> ";
	cin >> r;

	Circle pool(r);        //����Ӿ�ض���
	Circle zhalan(r + 3);  //����դ������

	float price_zhalan = zhalan.zhouchang() * FENCE_PRICE;  //����դ�������
	cout << "դ�������Ϊ: " << price_zhalan << endl;

	float price_area = (zhalan.area() - pool.area()) * CONCERTE_PRICE;  //������������
	cout << "���������Ϊ: " << price_area << endl;

	return 0;
}

//#######################################################################################