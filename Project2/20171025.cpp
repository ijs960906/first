/*#include <iostream>
#include <string>
using namespace std;

struct StudentInfo
{
	char bloodType;
	int stuNumber;
	char grade;
};

struct Student
{
	int number;
	int age;
	int language;
	int math;
	int science;
};

int triangle(int a, int b);
void swap(int &a,int &b);
int main() {
	//13:53
	/*
	cout << "�а��� ��ǻ�ͳ�Ʈ��ũ�� �Դϴ�." << endl;
	cout << "���̴� 19���Դϴ�." << endl;
	cout << "��� ������ ���α׷��� �Դϴ�.";
	*/



	//13:57
	/*
	int i,a,sum;

	for(i=1,sum=0;i<=5;i++){
	cout << i << "��° ���� �Է� : " ;
	cin >> a;
	sum = sum+a;
	a=0;
	}
	cout << "�հ� : " << sum;
	*/



	//14:06
	/*
	int a = 20,b = 30;
	a *= 2;
	a /= 4;
	b %= 7;
	cout << "c = " << a-b << endl;
	cout << "d = " << b++ << endl;
	cout << "e = " << ++b << endl;
	cout << "f = " << a-b++ << endl;
	*/



	//14:16
	/*
	bool square;
	int num1,num2,area;

	cout << "���� ���� : ";
	cin >> num1;
	cout << "���� ���� : ";
	cin >> num2;
	square = num1==num2;
	cout << "���簢�� ���� : " << square << endl;
	area = num1*num2;
	cout << "���� : " << area << endl;
	*/



	//14:49
	/*
	int n[10] = {0};
	n[5] = 8;
	int *p;
	p = n;
	*p = 100;
	*(p +5 )= 8;
	cout << *p <<endl;
	p=p+7;
	cout << *p <<endl;
	*p = 99;
	cout << *p << endl;
	cout << "�迭���� " << endl;
	for(int i=0;i<10;i++)
	cout <<"n["<<i<<"] ��° �� "<< n[i] << endl;
	*/

	//15:06
	/*
	struct StudentInfo student;

	cout << "�������� �Է��ϼ���.";
	cin >> student.bloodType;

	cout << "�й��� �Է��ϼ���.";
	cin >> student.stuNumber;

	cout << "������ �Է��ϼ���.";
	cin >> student.grade;

	cout << "������ : " << student.bloodType;
	cout << "�й� : " << student.stuNumber;
	cout << "���� : " << student.grade;
	*/



	//15:14
	/*
	struct Student student;

	cout << "�л���ȣ : ";
	cin >> student.number;
	cout << "���� : ";
	cin >> student.age;
	cout << "���� : ";
	cin >> student.language;
	cout << "���� : ";
	cin >> student.math;
	cout << "���� : ";
	cin >> student.science;
	*/
	
	
	
	//15:22
	/*
	int width,height;
	cout << "�غ��� ���̸� �Է��ϼ��� : ";
	cin >> width;
	cout << "���̸� �Է��ϼ���. : ";
	cin >> height;
	cout << "�ﰢ���� ���̴� : " << triangle(width, height) << endl;
	*/



	//13:29
	/*
	int num1 = 1020;
	int &num2 = num1;


	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	*/
	


	//15:50
	/*
	int n = 2, m = 9;
	swap(n, m);
	cout << n << ' ' << m << endl;
	*/


	
	// 16:57
	/*string str;
	string address("����� �߱� ������ 299");
	string copyAddress(address);
	
	cout << address << endl;
	cout << copyAddress << endl;
	*/ //��Ʈ�� ��ü ����


	/*string a("I love C++");
	a.insert(2, "really ");
	cout << a << endl;*/ //���ڿ� �����ϱ�


	/*a.replace(2, 11, "study");
	cout << a << endl;*/ //���ڿ� ��ü�ϱ� 


	/*string name = "Chaehyun";
	string alias = "Chae";
	if (name == alias)
		cout << "����" << endl;
	else
		cout << "�ٸ�" << endl;
	int res = name.compare(alias);
	if (res == 0)
		cout << "�� ���ڿ��� ����.";
	else if (res < 0)
		cout << name << "<" << alias << endl;
	else
		cout << alias << "<" << name << endl;
	cout << res << endl;*/ 
							//���ڿ� �� �� ���ڿ��� ������ 0, a.compare(b) ���� a�� b���� ���������� �տ� ���� ����,�ڿ� ���� ����� �����Ѵ�.
	
	
	/*string a("I");
	cout << a << endl;
	a.append(" love ");
	cout << a << endl;

	a = "I love C++";
	string b(".");
	string c;
	c = a + b;
	c += b;
	cout << c << endl;*/ //���ڿ� ����

	
	/*string a("I love C++");
	a.erase(0, 7); // 0���� 7���� ����
	cout << a << endl;
	a.clear(); // ��������
	cout << a << endl;*/ // ���ڿ� ����

	
	/*string b = "I love C++";
	string c = b.substr(2, 4); // 2��°���� 4��
	cout << c << endl;
	string d = b.substr(2); // 2��°���� ������
	cout << d << endl;*/ //���ڿ����� �Ϻκ� ����

	
	/*string e("I love C++");
	int length = e.length();
	cout << length << endl;
	int size = e.size();
	cout << size << endl;*/ //���ڿ� ����

	
	/*string f = "I love love love C++";
	int index = f.find("love");
	cout << index << endl;
	index = f.find("love", index+7 );
	cout << index << endl;
	index = f.find("C#");
	cout << index << endl;
	index = f.find('v', 7);
	cout << index << endl;*/ // ���ڿ� �˻� ,�ڿ����� �˻�����


	/*string g("I love C++");
	char ch1 = g.at(7);
	cout << ch1 << endl;
	char ch2 = g[8];
	cout << ch2 << endl;*/ // ���ڿ��� Ư�� ��ġ�� �ִ� ���ڸ� ����

	/*string names[5];
	int i;
	for (i = 0; i < 5; i++) {
		cout << "�̸�  >> ";
		getline(cin, names[i]);
	}

	string latter = names[0];
	for (i = 1; i > 5; i++) {
		if (latter < names[i])
			latter = names[i];
	}
	cout << "�������� ���� �տ� ������ ���ڿ��� " << latter << endl;*/
	
	
	
	//


int triangle(int a, int b) {
	return a*b / 2;
}

/*void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/ // ���������� ���� ȣ�� 

/*void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/ // ���� ���� ȣ��

/*void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}*/ // �ּҿ� ���� ȣ��

// ������ �ּҿ� ���� ȣ���� ����ο��� ��Ȯ�ϰ� ����������� �������ָ� �ȵ�