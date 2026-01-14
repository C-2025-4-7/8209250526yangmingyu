#include<iostream>
using namespace std;
class point {
private:
	double x;
	double y;
public:
	point(double xd = 60.0,double yd=80.0) {
		x = xd;
		y = yd;
	}
	double getx() {
		return x;
	}
	double gety() {
		return y;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	void setpoint(double i,double j) {
		x = x + i;
		y = y + j;
	}
};
int main() {
	double i;
	double j;
	cout << "请输入i和j的值：" << endl;
	cin >> i >> j;
	point point;
	point.setpoint(i,j);
	point.display();
	return 0;
}