#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "please input two numbers:" << endl;
	cin >> a >> b;
	bool c = 0;
	for (int i = a; i >= 2; i--) {
		if (a % i == 0 && b % i == 0) {
			c = 1;
			cout << "a和b的最大公约数是：" << i << endl;
			break;
		}
	}
	if(c==0)
		cout << "a和b没有最大公约数" << endl;
	bool d = 0;
	for(int i=(a>b?a:b);; i++) {
		if (i % a == 0 && i % b == 0) {
			d = 1;
			cout << "a和b的最小公倍数是：" << i << endl;
			break;
		}
	}
	return 0;
}