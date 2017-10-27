//#include<iostream>
//#include<string>
//using namespace std;

//10:56
//class Circle
//{
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//double Circle::getArea() {
//	return radius*radius*3.14;
//}
//
//
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	cout << donut.getArea() << endl;
//
//	Circle *p;
//	p = &donut;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//	p = &pizza;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}



//11:22
//class Color
//{
//	int red, green, blue;
//public:
//	Color() { red = green = blue = 0; }
//	Color(int r, int g, int b) { red = r, green = g, blue = b; }
//	void setColor(int r,int g,int b) { red = r, green = g, blue = b; }
//	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
//};
//
//int main() {
//	Color screenColor(255, 0, 0);
//	Color *p;
//	p = &screenColor;
//	p->show();
//	Color colors[3];
//	p = colors;
//
//	p[0].setColor(255, 0, 0);
//	p[1].setColor(0, 255, 0);
//	p[2].setColor(0, 0, 255);
//
//	for (int i = 0; i < 3; i++) {
//		p[i].show();
//	}
//}



//11:32
//class Circle
//{
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//
//private:
//
//};
//double Circle::getArea() {
//	return radius*radius*3.14;
//}
//
//
//int main() {
//	Circle circleArray[3];
//
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//	}
//}



//11:57
//class Example
//{
//	int a;
//public:
//	Example() { a = 100; cout << a << ' '; }
//	Example(int x) { a = x; cout << a << ' '; }
//	Example(int x, int y) { a = x*y; cout << a << ' '; }
//	int get() { return a; }
//
//};
//
//
//	int main() {
//		Example arr[3];
//		int i,sum = 0;
//		Example arr1[2][2] = { {Example(3,5),Example(4,6) },{ Example(7),Example() } };
//		Example *p ;
//		p = arr;
//		for (i = 0; i < 3; i++) {
//			sum = sum + p[i].get();
//		}
//		cout << sum;
//	}



//12:17
//class Circle
//{
//	int radius;
//public:
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14*radius*radius; }
//	Circle();
//};
//
//Circle::Circle() {
//
//}
//int main() {
//	int i, j, count = 0,num;
//	cout << "원의 갯수 : ";
//	cin >> num;
//	
//	Circle *p = new Circle[num];
//	
//	
//	for (i = 0; i < num; i++) {
//		cout << "원" << i + 1 << "의 반지름 >> ";
//		cin >> j;
//		p[i].setRadius(j);
//		if (p[i].getArea() >= 50)
//			count++;
//	}
//	cout << "면적이 50보다 큰 원은 " << count << "개" << endl;
//}



//13:40
//class Circle
//{
//private:
//	int radius;
//public:
//	Circle(Circle& c);
//	Circle() { radius = 1;}
//	Circle(int radius) { this->radius = radius; }
//	double getArea() { return 3.14*radius*radius; }
//
//};
//Circle::Circle(Circle& c) {
//	this->radius = c.radius;
//	cout << "복사 생성자 실행 radius = " << radius << endl;}
//
//int main() {
//	
//	Circle src(30);
//	Circle dest(src);
//	
//	cout << "원본의 면적 = " << (int)src.getArea() << endl;
//	cout << "사본의 면적 = " << (int)dest.getArea() << endl;
//}



//13:48
//void a(char a = ' ', int b = 1);
//
//void a(char a, int b) {
//	for (int d = 0; d < b; d++) {
//		for (int c = 0; c < 5; c++)
//			cout << a;
//		cout << endl;
//	}
//}
//
//int main() {
//	a();
//	a('@');
//	a('#', 3);
//}



//14:10
//void v1(int a = 10, char b = '@') {
//	for (int i = 0; i < a; i++)
//		cout << b;
//	cout << endl;
//}
//
//int main() {
//	v1();
//	v1(10, '^');
//}



//15:03
//int add(int ag[],int size) {
//	int sum = 0;
//	if (ag == NULL)
//		return sum;
//	else{
//		for (int i = 0; i < size; i++)
//			sum += ag[i];
//		return sum;
//	}
//}
//int add(int ag1[],int size,int ag2[]) {
//	return add(ag1, size) + add(ag2, size);
//}
//int add(int ag1[], int size, int ag2[]=NULL) {
//	int i,sum=0;
//	for (i = 0; i < size; i++) {
//		sum += ag1[i];
//	}
//	if (ag2 == NULL)
//		return sum;
//	else {
//		for (i = 0; i < size; i++) {
//			sum += ag2[i];
//		}
//	}
//	return sum;
//}
//
//int main() {
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 6,7,8,9,10 };
//	int c = add(a, 5);
//	int d = add(a, 5, b);
//	cout << c << endl;
//	cout << d << endl;
//}



//15:09
//int larger(int e=0,int d=0,int f=0) {
//	return (e > d ? e : d) > f ? (e > d ? e : d) : f;
//}
//int main() {
//	int a = larger(3, 5);
//	int b = larger(300, 50);
//	int c = larger(30, 70,50);
//	cout << a << ' ' << b << ' ' << c << endl;
//}



//15:26
//int main() {

	//string s1,s2,s3;
	//cout << "첫번째 문자열 : ";
	//cin >> s1;
	//cout << "두번째 문자열 : ";
	//cin >> s2;
	//cout << "세번째 문자열 : ";
	//cin >> s3;

	//if ((s1 + s2 + s3).size() >= 10)
	//	cout << "10자 이상" << endl;
	//else
	//	cout << "10자 안됨" << endl;

	//cout << "첫번째 문자열 : ";
	//cin >> s1;
	//cout << "두번째 문자열 : ";
	//cin >> s2;
	//if (s1==s2)
	//	cout << "같다" << endl;
	//else
	//	cout << "다르다." << endl; // 문자열이 같은지 확인
	

	//cout << "전화번호를 입력하세요 : ";
	//cin >> s1;
	//if (s1.size() == 11)
	//	cout << "확인" << endl;
	//else
	//	cout << "잘못 입력하셨습니다." << endl; // 길이가 맞는지 안맞는지 확인

	//cout << "이름을 입력하세요 : ";
	//cin >> s1;
	//cout << "이름의 크기는 : " << s1.size() << endl;
//}



//15:32
//class Circle
//{
//public:
//	int radius;
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea();
//};
//
//Circle::Circle()
//{
//	radius = 1;
//	cout << "반지름" << radius << "인 원 생성" << endl;
//}
//Circle::Circle(int r)
//{
//	radius = r;
//	cout << "반지름" << radius << "인 원 생성" << endl;
//}
//
//Circle::~Circle()
//{
//	cout << "반지름" << radius << "인 원 소멸" << endl;
//}
//double Circle::getArea() {
//	return 3.14*radius*radius;
//}
//Circle g1(1000);
//Circle g2(2000);
//void f() {
//	Circle g3(100);
//	Circle g4(200);
//}
//int main() {
//	Circle g5;
//	Circle g6(30);
//	f();
//}