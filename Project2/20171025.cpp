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
	cout << "학과는 컴퓨터네트워크과 입니다." << endl;
	cout << "나이는 19살입니다." << endl;
	cout << "희망 직업은 프로그래머 입니다.";
	*/



	//13:57
	/*
	int i,a,sum;

	for(i=1,sum=0;i<=5;i++){
	cout << i << "번째 정수 입력 : " ;
	cin >> a;
	sum = sum+a;
	a=0;
	}
	cout << "합계 : " << sum;
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

	cout << "가로 길이 : ";
	cin >> num1;
	cout << "세로 길이 : ";
	cin >> num2;
	square = num1==num2;
	cout << "정사각형 여부 : " << square << endl;
	area = num1*num2;
	cout << "넓이 : " << area << endl;
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
	cout << "배열시작 " << endl;
	for(int i=0;i<10;i++)
	cout <<"n["<<i<<"] 번째 방 "<< n[i] << endl;
	*/

	//15:06
	/*
	struct StudentInfo student;

	cout << "혈액형을 입력하세요.";
	cin >> student.bloodType;

	cout << "학번을 입력하세요.";
	cin >> student.stuNumber;

	cout << "평점을 입력하세요.";
	cin >> student.grade;

	cout << "혈액형 : " << student.bloodType;
	cout << "학번 : " << student.stuNumber;
	cout << "평점 : " << student.grade;
	*/



	//15:14
	/*
	struct Student student;

	cout << "학생번호 : ";
	cin >> student.number;
	cout << "나이 : ";
	cin >> student.age;
	cout << "국어 : ";
	cin >> student.language;
	cout << "수학 : ";
	cin >> student.math;
	cout << "과학 : ";
	cin >> student.science;
	*/
	
	
	
	//15:22
	/*
	int width,height;
	cout << "밑변의 길이를 입력하세요 : ";
	cin >> width;
	cout << "높이를 입력하세요. : ";
	cin >> height;
	cout << "삼각형의 넓이는 : " << triangle(width, height) << endl;
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
	string address("서울시 중구 을지로 299");
	string copyAddress(address);
	
	cout << address << endl;
	cout << copyAddress << endl;
	*/ //스트링 객체 생성


	/*string a("I love C++");
	a.insert(2, "really ");
	cout << a << endl;*/ //문자열 삽입하기


	/*a.replace(2, 11, "study");
	cout << a << endl;*/ //문자열 대체하기 


	/*string name = "Chaehyun";
	string alias = "Chae";
	if (name == alias)
		cout << "같음" << endl;
	else
		cout << "다름" << endl;
	int res = name.compare(alias);
	if (res == 0)
		cout << "두 문자열이 같다.";
	else if (res < 0)
		cout << name << "<" << alias << endl;
	else
		cout << alias << "<" << name << endl;
	cout << res << endl;*/ 
							//문자열 비교 두 문자열이 같으면 0, a.compare(b) 에서 a가 b보다 사전순으로 앞에 오면 음수,뒤에 오면 양수를 리턴한다.
	
	
	/*string a("I");
	cout << a << endl;
	a.append(" love ");
	cout << a << endl;

	a = "I love C++";
	string b(".");
	string c;
	c = a + b;
	c += b;
	cout << c << endl;*/ //문자열 연결

	
	/*string a("I love C++");
	a.erase(0, 7); // 0부터 7까지 삭제
	cout << a << endl;
	a.clear(); // 완전삭제
	cout << a << endl;*/ // 문자열 삭제

	
	/*string b = "I love C++";
	string c = b.substr(2, 4); // 2번째부터 4개
	cout << c << endl;
	string d = b.substr(2); // 2번째부터 끝까지
	cout << d << endl;*/ //문자열에서 일부분 발췌

	
	/*string e("I love C++");
	int length = e.length();
	cout << length << endl;
	int size = e.size();
	cout << size << endl;*/ //문자열 길이

	
	/*string f = "I love love love C++";
	int index = f.find("love");
	cout << index << endl;
	index = f.find("love", index+7 );
	cout << index << endl;
	index = f.find("C#");
	cout << index << endl;
	index = f.find('v', 7);
	cout << index << endl;*/ // 문자열 검색 ,뒤에부터 검색시작


	/*string g("I love C++");
	char ch1 = g.at(7);
	cout << ch1 << endl;
	char ch2 = g[8];
	cout << ch2 << endl;*/ // 문자열의 특정 위치에 있는 문자를 리턴

	/*string names[5];
	int i;
	for (i = 0; i < 5; i++) {
		cout << "이름  >> ";
		getline(cin, names[i]);
	}

	string latter = names[0];
	for (i = 1; i > 5; i++) {
		if (latter < names[i])
			latter = names[i];
	}
	cout << "사전에서 가장 앞에 나오는 문자열은 " << latter << endl;*/
	
	
	
	//


int triangle(int a, int b) {
	return a*b / 2;
}

/*void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/ // 참조변수에 의한 호출 

/*void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/ // 값에 의한 호출

/*void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}*/ // 주소에 의한 호출

// 참조와 주소에 의한 호출은 선언부에서 정확하게 선언해줘야함 형만써주면 안됨