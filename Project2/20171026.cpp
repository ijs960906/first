//#include<iostream>
//#include<string>
//using namespace std;
//18:01
//class Aclass
//{
//public:
//	Aclass();
//	~Aclass();
//
//private:
//
//};
//
//Aclass::Aclass()
//{
//	cout << "a 생성" << endl;
//}
//
//Aclass::~Aclass()
//{
//	cout << "a 소멸"<< endl;
//}
//
//class Bclass
//{
//public:
//	Bclass();
//	~Bclass();
//
//private:
//
//};
//
//Bclass::Bclass()
//{
//	cout << "b 생성" << endl;
//}
//
//Bclass::~Bclass()
//{
//	cout << "b 소멸" << endl;
//}
//
//class Cclass
//{
//public:
//	Cclass();
//	~Cclass();
//
//private:
//
//};
//
//Cclass::Cclass()
//{
//	cout << "c 생성" << endl;
//}
//
//Cclass::~Cclass()
//{
//	cout << "c 소멸" << endl;
//}
//
//class Dclass
//{
//public:
//	Dclass();
//	~Dclass();
//
//private:
//
//};
//
//Dclass::Dclass()
//{
//	cout << "d 생성" << endl;
//}
//
//Dclass::~Dclass()
//{
//	cout << "d 소멸" << endl;
//}
//Aclass a;
//Bclass b;
//void f() {
//	Cclass c;
//}
//int main() {
//	f();
//	Dclass d;
//} //클래스 생성 소멸 순서



//6:14
//class Tower
//{
//public:
//	int height;
//	Tower();
//	Tower(int h);
//	int getHeight();
//	~Tower();
//
//private:
//
//};
//int Tower::getHeight() {
//	return height;
//}
//Tower::Tower()
//{
//	height = 1;
//}
//Tower::Tower(int h)
//{
//	height = h;
//}
//Tower::~Tower()
//{
//}
//int main() {
//	Tower seoulTower;
//	Tower worldTower(100);
//	cout <<"높이는 "<< seoulTower.getHeight() << "미터 " << endl;
//	cout << "높이는 " << worldTower.getHeight() << "미터 " << endl;
//}