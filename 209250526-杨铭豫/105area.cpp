#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float f;
	float c;
	cout << "请输入华氏温度:" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout <<"转换为摄氏度为："<<fixed<< setprecision(2)<< c<< endl;
	return 0;
}c