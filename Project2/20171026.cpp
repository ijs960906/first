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
//	cout << "a ����" << endl;
//}
//
//Aclass::~Aclass()
//{
//	cout << "a �Ҹ�"<< endl;
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
//	cout << "b ����" << endl;
//}
//
//Bclass::~Bclass()
//{
//	cout << "b �Ҹ�" << endl;
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
//	cout << "c ����" << endl;
//}
//
//Cclass::~Cclass()
//{
//	cout << "c �Ҹ�" << endl;
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
//	cout << "d ����" << endl;
//}
//
//Dclass::~Dclass()
//{
//	cout << "d �Ҹ�" << endl;
//}
//Aclass a;
//Bclass b;
//void f() {
//	Cclass c;
//}
//int main() {
//	f();
//	Dclass d;
//} //Ŭ���� ���� �Ҹ� ����



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
//	cout <<"���̴� "<< seoulTower.getHeight() << "���� " << endl;
//	cout << "���̴� " << worldTower.getHeight() << "���� " << endl;
//}