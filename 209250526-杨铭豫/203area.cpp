#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	double C;
	cout << "请输入三角形的三边长：";
	cin >> a >> b >> c;
	if(a>a+b||b>a+c||c>a+b)
	{
		cout << "不能构成三角形" << endl;
		return 0;
	}
		else if(a==b||a==b||b==c)
		cout << "该三角形为等腰三角形" << endl;
	C = a + b + c;
	cout << "三角形的周长为：" << C << endl;
	return 0;
}