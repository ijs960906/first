#include<stdio.h>
int main() {
	int a[10];
	int i, pivot,left,right,high,low,temp;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	pivot = sizeof(a[i]) / sizeof(int)/2;
	left = 0;
	right = sizeof(a[i]) / sizeof(int);
	low = left;
	high = right;
	while (1) {
		if (a[low] >= a[pivot])
			if (a[high] <= a[pivot]) {
				temp = a[low];
				a[low] = a[high];
				a[high] = temp;
			}
		else {
			low++;
			high--;
		}
	}
}