#include<iostream>
using namespace std;
double jia(double a, double b) {
	return a + b;
}
double jian(double a, double b) {
	return a - b;
}
double cheng(double a, double b) {
	return a * b;
}
double chu(double a, double b) {
	return a / b;
}
int main() {
	bool i;
	int a;
	cout << "1.加法 2.减法 3.乘法 4.除法 5.退出" << endl;
	cin >> a;
	double x, y;
		cout << "请输入两个数：" << endl;
		cin >> x >> y;
		switch (a) {
		case 1:
			cout << jia(x, y) << endl;
			break;
		case 2:
			cout << jian(x, y) << endl;
			break;
		case 3:
			cout << cheng(x, y) << endl;
			break;
		case 4:
			cout << chu(x, y) << endl;
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}
}
