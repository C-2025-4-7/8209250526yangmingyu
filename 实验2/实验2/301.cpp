#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "请输入两个整数：";
	cin >> a >> b;
	int m, n;
	for (int i = a; ; i--) {
		if (a % i == 0 && b % i == 0) {
			m = i;
			break;
		}
	}
	for (int i = a; ; i++) {
		if (i % a == 0 && i % b == 0) {
			n = i;
			break;
		}
	}
	cout << "最大公约数为：" << m << endl;
	cout << "最小公倍数为：" << n << endl;
	return 0;
}