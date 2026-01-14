#include<iostream>
using namespace std;
class zfx {
private:
	double length;
	double height;
	double width;
public:
	double square() {
		return (length * height * width);
	}
	void square_cin() {
		cout << "请输入长方体的各边长：" << endl;
		cin >> length >> height >> width;
	}
};
int main() {
	zfx zfx1;
	zfx1.square_cin();
	double square1 = zfx1.square();
	cout << "正方体的体积为：" << square1 << endl;
}