#include<iostream>
using namespace std;
int main() {
	const double pi = 3.14;
	double r;	//r为圆锥的半径
	double h;	//h为圆锥的高
	double V;	//V为圆锥的体积
	cout << "圆锥的半径为：" << endl;
	cin >> r;
	cout << "圆锥的高为：" << endl;
	cin >> h;
	V = ( r * r * pi * h)/3;
	cout << "圆锥的体积为" << V << endl;
	return 0;
}