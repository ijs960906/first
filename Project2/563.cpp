//10개의 정수를 입력받아 배열에 저장한 후 내림차순으로 정렬하여 출력하시오.
//
//
//[Copy]
//95 100 88 65 76 89 58 93 77 99
//[Copy]
//100 99 95 93 89 88 77 76 65 58


//C
//#include<stdio.h>
//
//int main() {
//	int a[10];
//	int temp, i, j;
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (a[i] > a[j]) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//}


//c++
//#include<iostream>
//using namespace std;
//
//void arr(int a[]) {
//	int temp, i, j;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (a[i] > a[j]) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//
//		int a[10];
//		int i;
//		for (i = 0; i < 10; i++) {
//			cin >> a[i];
//		}
//		arr(a);
//		for (i = 0; i < 10; i++) {
//			cout << a[i] << ' ';
//	}
//}
