#include<iostream>
#include<string>

using namespace std;

//17:05
/*
class Circle
{
public:
	int radius;
	double getArea();

}; //Ŭ���� �����

double Circle::getArea() {
	return 3.14*radius*radius;
} // Ŭ���� ������ 
	//Ÿ�� Ŭ������ ��������������(::) ����Լ�
	*/

//
class Rectangle
{
public:
	int width, height;
	Rectangle();
	Rectangle(int w,int h);
	int getArea();
	~Rectangle();

private:

};
int Rectangle::getArea() {
	return width*height;
}
Rectangle::Rectangle()
{
	width = 3;
	height = 5;
	cout << "���� " << width << "���� " << height << "�簢�� ����" << endl;
	cout << "�簢���� ������" << getArea() << endl;
}
Rectangle::Rectangle(int w,int h)
{
	width = w;
	height = h;
	cout << "���� " << width << "���� " << height << "�簢�� ����"<<endl;
	cout << "�簢���� ������"<< getArea() << endl;
}
Rectangle::~Rectangle()
{
}

int main() {
	//17:09
	/*Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢�� ������ " << rect.getArea() << endl;*/ 
	Rectangle square;
	Rectangle square1(5, 7);

}