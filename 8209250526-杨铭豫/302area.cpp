#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return false;
			break;
		}
	}
	return true;
}
int main() {
	int a;
	cout << "请输入一个整数:";
	cin >> a;
	if (is_prime(a)) {
		cout << a << "是素数。" << endl;
	}
	else {
		cout << a << "不是素数。" << endl;
	}
	cout << "以下是200以内的素数：" << endl;
	int b[100] = { 0 };
	int c = 0;
	for (int i = 2; i < 200; i++) {
		if (is_prime(i)) {
			b[c] = i;
			c++;
		}
	}
	for(int i=0;i<c;i++){
		if (b[i]) {
			cout << b[i]<<"\t";
		}
		if (i % 10 == 9) {
			cout << endl;
		}
	}
}