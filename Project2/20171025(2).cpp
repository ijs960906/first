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

}; //클래스 선언부

double Circle::getArea() {
	return 3.14*radius*radius;
} // 클래스 구현부 
	//타입 클래스명 범위지정연산자(::) 멤버함수
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
	cout << "가로 " << width << "세로 " << height << "사각형 생성" << endl;
	cout << "사각형의 면적은" << getArea() << endl;
}
Rectangle::Rectangle(int w,int h)
{
	width = w;
	height = h;
	cout << "가로 " << width << "세로 " << height << "사각형 생성"<<endl;
	cout << "사각형의 면적은"<< getArea() << endl;
}
Rectangle::~Rectangle()
{
}

int main() {
	//17:09
	/*Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형 면적은 " << rect.getArea() << endl;*/ 
	Rectangle square;
	Rectangle square1(5, 7);

}