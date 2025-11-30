#include<iostream>
using namespace std;
float fx(float x)
{
	return 3 - 2 * x;
}
float gx(float x) {
	return 1.0 / (2 * x) + 1;
}
float hx(float x) {
	return x * x;
}
int main() {
	int a;
	cout << "请输入一个数:";
	cin >> a;
	if(a>0&&a<1)
		cout<< "f(x)=" << fx(a) << endl;
	else if(a>=1&&a<5)
		cout << "f(x)=" << gx(a) << endl;
	else if(a>=5&&a<10)
		cout << "f(x)=" << hx(a) << endl;
	else
		cout << "error" << endl;
}