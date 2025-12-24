#include<iostream>
using namespace std;
void pop(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int x = 0; x < size - i - 1; x++) {
			if (*(arr + x) > *(arr + x + 1)) {
				int m = *(arr + x);
				*(arr + x) = *(arr + x + 1);
				*(arr + x + 1) = m;
			}
		}
	}
}
int main() {
	int max_size = 100;
	int size;
	int* arr = new int[max_size];
	cout << "请输入一个数组"<<endl;
	cout << "请输入这个数组元素的数量：" << endl;
	cin >> size;
	if (size > max_size) {
		cout << "超过最大限制" << endl;
		delete[] arr;
		return 1;
	}
	if (size <= 0) {
		cout << "必须为正整数" << endl;
		delete[] arr;
		return 1;
	}
	cout << "请输入每一个元素：" << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(arr+i);
	}
	pop(arr, size);
	for (int i = 0; i < size; i++) {
		cout << *(arr + i);
	}
	delete[] arr;
	arr = nullptr;
	return 0;
}